#pragma once
#include "BaseComponent.cpp"

class Komponen : public BaseComponent {
private:
    string merk;
    string nama;
    double harga;
public:
    Komponen() : BaseComponent(), merk(""), nama(""), harga(0.0) {}
    
    Komponen(string id, int warrantyMonths, string merk, string nama, double harga) 
        : BaseComponent(id, warrantyMonths) {
        this->merk = merk;
        this->nama = nama;
        this->harga = harga;
    }
    
    void setMerk(string merk) {
        this->merk = merk;
    }
    
    void setNama(string nama) {
        this->nama = nama;
    }
    
    void setHarga(double harga) {
        this->harga = harga;
    }
    
    string getMerk() const {
        return merk;
    }
    
    string getNama() const {
        return nama;
    }
    
    double getHarga() const {
        return harga;
    }
    
    void displayInfo() const override {
        BaseComponent::displayInfo();
        cout << "Merk: " << merk << ", Nama: " << nama << ", Harga: Rp" << harga << endl;
    }
    
};