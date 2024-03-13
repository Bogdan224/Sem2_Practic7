#pragma once
#include<string>
#include<vector>
#include"Smartphone.h"
using namespace std;
class Catalog {
private:
    vector<Smartphone> smartphones;
public:
    void addSmartphone(string model, double price, string manufacturer,
        string color, string display, string ram,
        string storage, string cpu, string os);
    Smartphone getSmartphone(string model);
    Smartphone search(const Smartphone& searchSmartphone);
};

