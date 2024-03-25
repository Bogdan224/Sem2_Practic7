#pragma once
#include<string>
#include<vector>
#include<list>
#include"Smartphone.h"
using namespace std;
class Catalog {
private:
    list<Smartphone> smartphones;
public:
    void addSmartphone(int year, int camerasCount, string model, double price, string manufacturer,
        string color, double display, int ram,
        int storage, string cpu, string os, string chargerType);
    void addSmartphone(const Smartphone &smartphone);
    Smartphone getSmartphone(string model);
    Smartphone search(const Smartphone& searchSmartphone);
    list<Smartphone> search(string model, string manufacturer);
    list<Smartphone> searchByPrice(double minPrice, double maxPrice = -1);
    list<Smartphone> searchByDisplay(double minDisplay, double maxDisplay = -1);
    list<Smartphone> searchByRAM(int minRAM, int maxRAM = -1);
    list<Smartphone> searchByStorage(int minStorage, int maxStorage = -1);
    list<Smartphone> searchByYear(int minYear, int maxYear = -1);
};

