#pragma once
#include "Komponen.cpp"
#include <vector>

class Motherboard : public Komponen{
private:
    string formFactor;
    string chipset;
    string socket;
    int maxRamCapacity;
    int ramSlots;
    int pcieSlots;
    int sataConnectors;
    int m2Slots;
    int powerConsumption;
public:
    Motherboard() : Komponen(), formFactor(""), chipset(""), socket(""), 
                    maxRamCapacity(0), ramSlots(0), pcieSlots(0), sataConnectors(0), 
                    m2Slots(0), powerConsumption(0) {}
    
    Motherboard(string id, int warrantyMonths, string merk, string nama, double harga,
                string formFactor, string chipset, string socket, int maxRamCapacity,
                int ramSlots, int pcieSlots, int sataConnectors, int m2Slots, int powerConsumption) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->formFactor = formFactor;
        this->chipset = chipset;
        this->socket = socket;
        this->maxRamCapacity = maxRamCapacity;
        this->ramSlots = ramSlots;
        this->pcieSlots = pcieSlots;
        this->sataConnectors = sataConnectors;
        this->m2Slots = m2Slots;
        this->powerConsumption = powerConsumption;
    }
    
    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }
    
    void setChipset(string chipset) {
        this->chipset = chipset;
    }
    
    void setSocket(string socket) {
        this->socket = socket;
    }
    
    void setMaxRamCapacity(int maxRamCapacity) {
        this->maxRamCapacity = maxRamCapacity;
    }
    
    void setRamSlots(int ramSlots) {
        this->ramSlots = ramSlots;
    }
    
    void setPcieSlots(int pcieSlots) {
        this->pcieSlots = pcieSlots;
    }
    
    void setSataConnectors(int sataConnectors) {
        this->sataConnectors = sataConnectors;
    }
    
    void setM2Slots(int m2Slots) {
        this->m2Slots = m2Slots;
    }
    
    void setPowerConsumption(int watts) {
        this->powerConsumption = watts;
    }
    
    string getFormFactor() const {
        return formFactor;
    }
    
    string getChipset() const {
        return chipset;
    }
    
    string getSocket() const {
        return socket;
    }
    
    int getMaxRamCapacity() const {
        return maxRamCapacity;
    }
    
    int getRamSlots() const {
        return ramSlots;
    }
    
    int getPcieSlots() const {
        return pcieSlots;
    }
    
    int getSataConnectors() const {
        return sataConnectors;
    }
    
    int getM2Slots() const {
        return m2Slots;
    }
    
    int getPowerConsumption() const {
        return powerConsumption;
    }
    
    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Motherboard Specs: " << formFactor << ", " << chipset << ", Socket " << socket << endl;
        cout << "Max RAM: " << maxRamCapacity << "GB, RAM Slots: " << ramSlots << endl;
        cout << "PCIe Slots: " << pcieSlots << ", SATA: " << sataConnectors << ", M.2: " << m2Slots << endl;
        cout << "Power Consumption: " << powerConsumption << "W" << endl;
    }
    
  
};
