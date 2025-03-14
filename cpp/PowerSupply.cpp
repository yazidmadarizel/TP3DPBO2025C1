#pragma once
#include "Komponen.cpp"

class PowerSupply : public Komponen {
private:
    int wattage;
    string certification;
    bool modular;
public:
    PowerSupply() : Komponen(), wattage(0), certification(""), modular(false) {}
    
    PowerSupply(string id, int warrantyMonths, string merk, string nama, double harga,
                int wattage, string certification, bool modular) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->wattage = wattage;
        this->certification = certification;
        this->modular = modular;
    }
    
    void setWattage(int wattage) {
        this->wattage = wattage;
    }
    
    void setCertification(string certification) {
        this->certification = certification;
    }
    
    void setModular(bool modular) {
        this->modular = modular;
    }
    
    int getWattage() const {
        return wattage;
    }
    
    string getCertification() const {
        return certification;
    }
    
    bool isModular() const {
        return modular;
    }
    
    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "PSU Specs: " << wattage << "W, " << certification << " certified" << endl;
        cout << "Modular: " << (modular ? "Yes" : "No") << endl;
    }
    
};