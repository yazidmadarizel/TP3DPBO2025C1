#pragma once
#include "Komponen.cpp"

class StorageDrive : public Komponen {
protected:
    int kapasitasGB;
    int readSpeed;
    int writeSpeed;
    int powerConsumption;
public:
    StorageDrive() : Komponen(), kapasitasGB(0), readSpeed(0), writeSpeed(0), powerConsumption(0) {}
    
    StorageDrive(string id, int warrantyMonths, string merk, string nama, double harga,
                int kapasitasGB, int readSpeed, int writeSpeed, int powerConsumption) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->kapasitasGB = kapasitasGB;
        this->readSpeed = readSpeed;
        this->writeSpeed = writeSpeed;
        this->powerConsumption = powerConsumption;
    }
    
    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }
    
    void setReadSpeed(int readSpeed) {
        this->readSpeed = readSpeed;
    }
    
    void setWriteSpeed(int writeSpeed) {
        this->writeSpeed = writeSpeed;
    }
    
    void setPowerConsumption(int watts) {
        this->powerConsumption = watts;
    }
    
    int getKapasitasGB() const {
        return kapasitasGB;
    }
    
    int getReadSpeed() const {
        return readSpeed;
    }
    
    int getWriteSpeed() const {
        return writeSpeed;
    }
    
    int getPowerConsumption() const {
        return powerConsumption;
    }
    
    virtual string getDriveType() const = 0;
    
    virtual void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Storage: " << kapasitasGB << "GB, Read: " << readSpeed << "MB/s, Write: " << writeSpeed << "MB/s" << endl;
        cout << "Power Consumption: " << powerConsumption << "W" << endl;
    }
    
};