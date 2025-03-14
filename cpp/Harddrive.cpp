#pragma once
#include "StorageDrive.cpp"

class Harddrive : public StorageDrive {
private:
    int rpm;
    int cacheSize;
public:
    Harddrive() : StorageDrive(), rpm(0), cacheSize(0) {}
    
    Harddrive(string id, int warrantyMonths, string merk, string nama, double harga,
              int kapasitasGB, int readSpeed, int writeSpeed, int powerConsumption,
              int rpm, int cacheSize) 
        : StorageDrive(id, warrantyMonths, merk, nama, harga, kapasitasGB, readSpeed, writeSpeed, powerConsumption) {
        this->rpm = rpm;
        this->cacheSize = cacheSize;
    }
    
    void setRpm(int rpm) {
        this->rpm = rpm;
    }
    
    void setCacheSize(int cacheSize) {
        this->cacheSize = cacheSize;
    }
    
    int getRpm() const {
        return rpm;
    }
    
    int getCacheSize() const {
        return cacheSize;
    }
    
    string getDriveType() const override {
        return "HDD";
    }
    
    void displayInfo() const override {
        StorageDrive::displayInfo();
        cout << "Drive Type: HDD, RPM: " << rpm << ", Cache: " << cacheSize << "MB" << endl;
    }
    
};
