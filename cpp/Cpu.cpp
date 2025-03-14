#pragma once
#include "Komponen.cpp"

class Cpu : public Komponen {
private:
    int jumlahCore;
    float kecepatanGHz;
    string socket;
    bool hasIntegratedGraphics;
    int powerConsumption;
public:
    Cpu() : Komponen(), jumlahCore(0), kecepatanGHz(0.0), socket(""), 
            hasIntegratedGraphics(false), powerConsumption(0) {}
    
    Cpu(string id, int warrantyMonths, string merk, string nama, double harga,
        int jumlahCore, float kecepatanGHz, string socket, bool hasIntegratedGraphics, int powerConsumption) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->jumlahCore = jumlahCore;
        this->kecepatanGHz = kecepatanGHz;
        this->socket = socket;
        this->hasIntegratedGraphics = hasIntegratedGraphics;
        this->powerConsumption = powerConsumption;
    }
    
    void setJumlahCore(int jumlahCore) {
        this->jumlahCore = jumlahCore;
    }
    
    void setKecepatanGHz(float kecepatanGHz) {
        this->kecepatanGHz = kecepatanGHz;
    }
    
    void setSocket(string socket) {
        this->socket = socket;
    }
    
    void setHasIntegratedGraphics(bool hasIntegratedGraphics) {
        this->hasIntegratedGraphics = hasIntegratedGraphics;
    }
    
    void setPowerConsumption(int watts) {
        this->powerConsumption = watts;
    }
    
    int getJumlahCore() const {
        return jumlahCore;
    }
    
    float getKecepatanGHz() const {
        return kecepatanGHz;
    }
    
    string getSocket() const {
        return socket;
    }
    
    bool getHasIntegratedGraphics() const {
        return hasIntegratedGraphics;
    }
    
    int getPowerConsumption() const {
        return powerConsumption;
    }
    
    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "CPU Specs: " << jumlahCore << " Core, " << kecepatanGHz << "GHz, Socket: " << socket << endl;
        cout << "Integrated Graphics: " << (hasIntegratedGraphics ? "Yes" : "No") << endl;
        cout << "Power Consumption: " << powerConsumption << "W" << endl;
    }
    
};
