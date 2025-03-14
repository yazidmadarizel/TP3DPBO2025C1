#pragma once
#include "Komponen.cpp"


class GPU : public Komponen {
private:
    int vram;
    int cudaCores;
    string architecture;
    int powerConsumption;
    int coolingCapacity;
    string coolingType;
public:
    GPU() : Komponen(), vram(0), cudaCores(0), architecture(""), 
            powerConsumption(0), coolingCapacity(0), coolingType("") {}
    
    GPU(string id, int warrantyMonths, string merk, string nama, double harga,
        int vram, int cudaCores, string architecture, int powerConsumption,
        int coolingCapacity, string coolingType) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->vram = vram;
        this->cudaCores = cudaCores;
        this->architecture = architecture;
        this->powerConsumption = powerConsumption;
        this->coolingCapacity = coolingCapacity;
        this->coolingType = coolingType;
    }
    
    void setVram(int vram) {
        this->vram = vram;
    }
    
    void setCudaCores(int cudaCores) {
        this->cudaCores = cudaCores;
    }
    
    void setArchitecture(string architecture) {
        this->architecture = architecture;
    }
    
    void setPowerConsumption(int watts) {
        this->powerConsumption = watts;
    }
    
    void setCoolingCapacity(int capacity) {
        this->coolingCapacity = capacity;
    }
    
    void setCoolingType(string type) {
        this->coolingType = type;
    }
    
    int getVram() const {
        return vram;
    }
    
    int getCudaCores() const {
        return cudaCores;
    }
    
    string getArchitecture() const {
        return architecture;
    }
    
    int getPowerConsumption() const {
        return powerConsumption;
    }
    
    int getCoolingCapacity() const {
        return coolingCapacity;
    }
    
    string getCoolingType() const {
        return coolingType;
    }
    
    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "GPU Specs: " << vram << "GB VRAM, " << cudaCores << " CUDA Cores, " << architecture << " architecture" << endl;
        cout << "Power Consumption: " << powerConsumption << "W" << endl;
        cout << "Cooling: " << coolingType << ", Capacity: " << coolingCapacity << " RPM" << endl;
    }
    
};