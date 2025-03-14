#pragma once
#include "Komponen.cpp"


class Cooling : public Komponen {
private:
    string type; // Air, Water, etc.
    int coolingCapacity;
    string coolingType;
    int powerConsumption;
public:
    Cooling() : Komponen(), type(""), coolingCapacity(0), coolingType(""), powerConsumption(0) {}
    
    Cooling(string id, int warrantyMonths, string merk, string nama, double harga,
            string type, int coolingCapacity, string coolingType, int powerConsumption) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->type = type;
        this->coolingCapacity = coolingCapacity;
        this->coolingType = coolingType;
        this->powerConsumption = powerConsumption;
    }
    
    void setType(string type) {
        this->type = type;
    }
    
    void setCoolingCapacity(int capacity){
        this->coolingCapacity = capacity;
    }
    
    void setCoolingType(string coolingType) {
        this->coolingType = coolingType;
    }
    
    void setPowerConsumption(int watts) {
        this->powerConsumption = watts;
    }
    
    string getType() const {
        return type;
    }
    
    int getCoolingCapacity() const {
        return coolingCapacity;
    }
    
    string getCoolingType() const {
        return coolingType;
    }
    
    int getPowerConsumption() const {
        return powerConsumption;
    }
    
    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Cooling Specs: " << type << ", Cooling Capacity: " << coolingCapacity << " RPM" << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Power Consumption: " << powerConsumption << "W" << endl;
    }
    
};