#pragma once
#include <vector>
#include "Komponen.cpp"

class Case : public Komponen {
private:
    string formFactor;
    vector<string> supportedMotherboards;
    int fanMounts;
    bool hasGlassPanel;
public:
    Case() : Komponen(), formFactor(""), fanMounts(0), hasGlassPanel(false) {}
    
    Case(string id, int warrantyMonths, string merk, string nama, double harga,
         string formFactor, vector<string> supportedMotherboards, int fanMounts, bool hasGlassPanel) 
        : Komponen(id, warrantyMonths, merk, nama, harga) {
        this->formFactor = formFactor;
        this->supportedMotherboards = supportedMotherboards;
        this->fanMounts = fanMounts;
        this->hasGlassPanel = hasGlassPanel;
    }
    
    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }
    
    void setSupportedMotherboards(vector<string> supportedMotherboards) {
        this->supportedMotherboards = supportedMotherboards;
    }
    
    void addSupportedMotherboard(string motherboardType) {
        this->supportedMotherboards.push_back(motherboardType);
    }
    
    void setFanMounts(int fanMounts) {
        this->fanMounts = fanMounts;
    }
    
    void setHasGlassPanel(bool hasGlassPanel) {
        this->hasGlassPanel = hasGlassPanel;
    }
    
    string getFormFactor() const {
        return formFactor;
    }
    
    vector<string> getSupportedMotherboards() const {
        return supportedMotherboards;
    }
    
    int getFanMounts() const {
        return fanMounts;
    }
    
    bool getHasGlassPanel() const {
        return hasGlassPanel;
    }
    
    void displayInfo() const override {
        Komponen::displayInfo();
        cout << "Case Specs: " << formFactor << ", Fan Mounts: " << fanMounts << endl;
        cout << "Glass Panel: " << (hasGlassPanel ? "Yes" : "No") << endl;
        cout << "Supported Motherboards: ";
        for (size_t i = 0; i < supportedMotherboards.size(); i++) {
            cout << supportedMotherboards[i];
            if (i < supportedMotherboards.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
};