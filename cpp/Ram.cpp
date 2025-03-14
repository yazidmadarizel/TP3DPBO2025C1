
#pragma once
#include "Komponen.cpp"

class Ram : public Komponen {
private:
    int kapasitasGB;
    string ddr;
    int clockSpeed;
    int powerConsumption;
public:
    Ram() : Komponen(), kapasitasGB(0), ddr(""), clockSpeed(0), powerConsumption(0) {}
    
    Ram(string id, int warrantyMonths, string merk, string nama, double harga,
        int kapasitasGB, string ddr, int clockSpeed, int powerConsumption) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->kapasitasGB = kapasitasGB;
        this->ddr = ddr;
        this->clockSpeed = clockSpeed;
        this->powerConsumption = powerConsumption;
    }
    
    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }
    
    void setDdr(string ddr) {
        this->ddr = ddr;
    }
    
    void setClockSpeed(int clockSpeed) {
        this->clockSpeed = clockSpeed;
    }
    
    void setPowerConsumption(int watts) {
        this->powerConsumption = watts;
    }
    
    int getKapasitasGB() const {
        return kapasitasGB;
    }
    
    string getDdr() const {
        return ddr;
    }
    
    int getClockSpeed() const {
        return clockSpeed;
    }
    
    int getPowerConsumption() const {
        return powerConsumption;
    }
    
    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "RAM Specs: " << kapasitasGB << "GB " << ddr << ", " << clockSpeed << "MHz" << endl;
        cout << "Power Consumption: " << powerConsumption << "W" << endl;
    }
    
 
};