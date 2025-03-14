#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "SSD.cpp"
#include "GPU.cpp"
#include "Motherboard.cpp"
#include "PowerSupply.cpp"
#include "Case.cpp"
#include "Cooling.cpp"

class Komputer {
private:
    string nama;
    string kategori;
    Motherboard motherboard;
    Cpu cpu;
    vector<Ram> ramList;
    vector<StorageDrive*> storageList;
    vector<GPU> gpuList;
    PowerSupply powerSupply;
    Case casing;
    vector<Cooling> coolingList;
    double totalHarga;
    int totalPowerConsumption;

    // Private method to calculate total price of all components
    void calculateTotalHarga() {
        totalHarga = 0.0;
        
        // Add price of all components
        totalHarga += motherboard.getHarga();
        totalHarga += cpu.getHarga();
        
        // Add RAM prices
        for (const Ram& ram : ramList) {
            totalHarga += ram.getHarga();
        }
        
        // Add storage prices
        for (StorageDrive* storage : storageList) {
            totalHarga += storage->getHarga();
        }
        
        // Add GPU prices
        for (const GPU& gpu : gpuList) {
            totalHarga += gpu.getHarga();
        }
        
        totalHarga += powerSupply.getHarga();
        totalHarga += casing.getHarga();
        
        // Add cooling prices
        for (const Cooling& cooling : coolingList) {
            totalHarga += cooling.getHarga();
        }
    }
    
    // Private method to calculate total power consumption
    void calculateTotalPowerConsumption() {
        totalPowerConsumption = 0;
        
        // Add power consumption of all components
        totalPowerConsumption += motherboard.getPowerConsumption();
        totalPowerConsumption += cpu.getPowerConsumption();
        
        // Add RAM power consumption
        for (const Ram& ram : ramList) {
            totalPowerConsumption += ram.getPowerConsumption();
        }
        
        // Add storage power consumption
        for (StorageDrive* storage : storageList) {
            totalPowerConsumption += storage->getPowerConsumption();
        }
        
        // Add GPU power consumption
        for (const GPU& gpu : gpuList) {
            totalPowerConsumption += gpu.getPowerConsumption();
        }
        
        // Add cooling system power consumption
        for (const Cooling& cooling : coolingList) {
            totalPowerConsumption += cooling.getPowerConsumption();
        }
    }

public:
    Komputer() : nama(""), kategori(""), totalHarga(0.0), totalPowerConsumption(0) {}
    
    Komputer(string nama, string kategori, Motherboard motherboard, Cpu cpu, 
             vector<Ram> ramList, vector<StorageDrive*> storageList, vector<GPU> gpuList,
             PowerSupply powerSupply, Case casing, vector<Cooling> coolingList) {
        this->nama = nama;
        this->kategori = kategori;
        this->motherboard = motherboard;
        this->cpu = cpu;
        this->ramList = ramList;
        this->storageList = storageList;
        this->gpuList = gpuList;
        this->powerSupply = powerSupply;
        this->casing = casing;
        this->coolingList = coolingList;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void setNama(string nama) {
        this->nama = nama;
    }
    
    void setKategori(string kategori) {
        this->kategori = kategori;
    }
    
    void setMotherboard(Motherboard motherboard) {
        this->motherboard = motherboard;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void setCpu(Cpu cpu) {
        this->cpu = cpu;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void setRamList(vector<Ram> ramList) {
        this->ramList = ramList;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void setStorageList(vector<StorageDrive*> storageList) {
        this->storageList = storageList;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void setGpuList(vector<GPU> gpuList) {
        this->gpuList = gpuList;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void setPowerSupply(PowerSupply powerSupply) {
        this->powerSupply = powerSupply;
        calculateTotalHarga();
    }
    
    void setCasing(Case casing) {
        this->casing = casing;
        calculateTotalHarga();
    }
    
    void setCoolingList(vector<Cooling> coolingList) {
        this->coolingList = coolingList;
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void addRam(Ram ram) {
        this->ramList.push_back(ram);
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void addStorage(StorageDrive* storage) {
        this->storageList.push_back(storage);
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void addGpu(GPU gpu) {
        this->gpuList.push_back(gpu);
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    void addCooling(Cooling cooling) {
        this->coolingList.push_back(cooling);
        calculateTotalHarga();
        calculateTotalPowerConsumption();
    }
    
    string getNama() const {
        return nama;
    }
    
    string getKategori() const {
        return kategori;
    }
    
    Motherboard getMotherboard() const {
        return motherboard;
    }
    
    Cpu getCpu() const {
        return cpu;
    }
    
    vector<Ram> getRamList() const {
        return ramList;
    }
    
    vector<StorageDrive*> getStorageList() const {
        return storageList;
    }
    
    vector<GPU> getGpuList() const {
        return gpuList;
    }
    
    PowerSupply getPowerSupply() const {
        return powerSupply;
    }
    
    Case getCasing() const {
        return casing;
    }
    
    vector<Cooling> getCoolingList() const {
        return coolingList;
    }
    
    double getTotalHarga() const {
        return totalHarga;
    }
    
    int getTotalPowerConsumption() const {
        return totalPowerConsumption;
    }
    
    bool isPowerSufficient() const {
        return powerSupply.getWattage() >= totalPowerConsumption;
    }
    
    // Method to display all computer information
    void displayInfo() const {
        cout << "====================================================" << endl;
        cout << "COMPUTER INFORMATION" << endl;
        cout << "====================================================" << endl;
        cout << "Name: " << nama << endl;
        cout << "Category: " << kategori << endl;
        cout << fixed << setprecision(0) << "Total Price: Rp" << totalHarga << endl;
        cout << "Total Power Consumption: " << totalPowerConsumption << "W" << endl;
        cout << "Power Supply Sufficient: " << (isPowerSufficient() ? "Yes" : "No") << endl;
        cout << endl;
        
        cout << "MOTHERBOARD:" << endl;
        motherboard.displayInfo();
        cout << endl;
        
        cout << "CPU:" << endl;
        cpu.displayInfo();
        cout << endl;
        
        cout << "RAM MODULES (" << ramList.size() << "):" << endl;
        for (size_t i = 0; i < ramList.size(); i++) {
            cout << "RAM " << (i + 1) << ":" << endl;
            ramList[i].displayInfo();
            cout << endl;
        }
        
        cout << "STORAGE DEVICES (" << storageList.size() << "):" << endl;
        for (size_t i = 0; i < storageList.size(); i++) {
            cout << "Storage " << (i + 1) << " (" << storageList[i]->getDriveType() << "):" << endl;
            storageList[i]->displayInfo();
            cout << endl;
        }
        
        cout << "GRAPHICS CARDS (" << gpuList.size() << "):" << endl;
        for (size_t i = 0; i < gpuList.size(); i++) {
            cout << "GPU " << (i + 1) << ":" << endl;
            gpuList[i].displayInfo();
            cout << endl;
        }
        
        cout << "POWER SUPPLY:" << endl;
        powerSupply.displayInfo();
        cout << endl;
        
        cout << "CASE:" << endl;
        casing.displayInfo();
        cout << endl;
        
        cout << "COOLING SYSTEMS (" << coolingList.size() << "):" << endl;
        for (size_t i = 0; i < coolingList.size(); i++) {
            cout << "Cooling " << (i + 1) << ":" << endl;
            coolingList[i].displayInfo();
            cout << endl;
        }
        
        cout << "====================================================" << endl;
    }

};