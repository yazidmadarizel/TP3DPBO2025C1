#pragma once
#include <iostream>
#include <string>

using namespace std;

class BaseComponent {
protected:
    string id;
    int warrantyMonths;
public:
    BaseComponent() : id(""), warrantyMonths(0) {}
    
    BaseComponent(string id, int warrantyMonths) {
        this->id = id;
        this->warrantyMonths = warrantyMonths;
    }
    
    void setId(string id) {
        this->id = id;
    }
    
    void setWarrantyMonths(int warrantyMonths) {
        this->warrantyMonths = warrantyMonths;
    }
    
    string getId() const {
        return id;
    }
    
    int getWarrantyMonths() const {
        return warrantyMonths;
    }
    
    virtual void displayInfo() const {
        cout << "ID: " << id << ", Warranty: " << warrantyMonths << " months" << endl;
    }
    
};