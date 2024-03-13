#pragma once
#include <string>
using namespace std;
class Smartphone {
private:
    string model, manufacturer, color, display, ram, storage, cpu, os;
    double price;
public:
    Smartphone();
    Smartphone(string model, double price, string manufacturer,
        string color, string display, string ram,
        string storage, string cpu, string os);
    string getModel() const;
    string getManufacturer() const;
    string getColor() const;  
    string getDisplay() const;
    string getRAM() const;    
    string getStorage() const;
    string getCPU() const;    
    string getOS() const;
    double getPrice() const;  
    void setPrice(double price);
};

