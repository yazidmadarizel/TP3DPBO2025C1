#pragma once
#include "StorageDrive.cpp"

class SSD : public StorageDrive {
private:
    string interface;
    string nandType;
public:
    SSD() : StorageDrive(), interface(""), nandType("") {}
    
    SSD(string id, int warrantyMonths, string merk, string nama, double harga,
        int kapasitasGB, int readSpeed, int writeSpeed, int powerConsumption,
        string interface, string nandType) 
        : StorageDrive(id, warrantyMonths, merk, nama, harga, kapasitasGB, readSpeed, writeSpeed, powerConsumption) {
        this->interface = interface;
        this->nandType = nandType;
    }
    
    void setInterface(string interface) {
        this->interface = interface;
    }
    
    void setNandType(string nandType) {
        this->nandType = nandType;
    }
    
    string getInterface() const {
        return interface;
    }
    
    string getNandType() const {
        return nandType;
    }
    
    string getDriveType() const override {
        return "SSD";
    }
    
    void displayInfo() const override {
        StorageDrive::displayInfo();
        cout << "Drive Type: SSD, Interface: " << interface << ", NAND Type: " << nandType << endl;
    }
    
};