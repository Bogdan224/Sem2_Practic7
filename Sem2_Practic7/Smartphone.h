#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include<float.h>
#include<iostream>
#include<ctime>
using namespace std;
class Smartphone {
private:
    int year, camerasCount, ram, storage;
    string model, manufacturer, color, cpu, os, chargerType;
    double price, display;
public:
    Smartphone();
    Smartphone(int year, int camerasCount, string model, double price, string manufacturer,
        string color, double display, int ram,
        int storage, string cpu, string os, string chargerType);
    int getYear() const;
    int getCamerasCount() const;
    string getModel() const;
    string getManufacturer() const;
    string getColor() const;  
    double getDisplay() const;
    int getRAM() const;    
    int getStorage() const;
    string getCPU() const;    
    string getOS() const;
    string getChargerType() const;
    double getPrice() const;  
    void setPrice(double price);
    void Print();
};

