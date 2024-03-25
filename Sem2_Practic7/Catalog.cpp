#include "Catalog.h"
void Catalog::addSmartphone(int year, int camerasCount, string model, double price, string manufacturer,
    string color, double display, int ram,
    int storage, string cpu, string os, string chargerType) {
    smartphones.push_back(Smartphone{year, camerasCount, model, price, manufacturer,
      color, display, ram,
      storage, cpu, os, chargerType });
}
void Catalog::addSmartphone(const Smartphone& smartphone) {
    smartphones.push_back(smartphone);
}
Smartphone Catalog::getSmartphone(string model) {
    for (Smartphone s : smartphones) {
        if (s.getModel() == model)  return s;
    }  return Smartphone();
}
Smartphone Catalog::search(const Smartphone& searchSmartphone) {
    for (auto s : smartphones) {
        auto year = searchSmartphone.getYear();
        if (year != 2000 && year != s.getYear())
            continue;
        auto camerasCount = searchSmartphone.getCamerasCount();
        if (camerasCount != 0 && camerasCount != s.getCamerasCount())
            continue;
        auto model = searchSmartphone.getModel();
        if (!model.empty() && model != s.getModel()) 
            continue;
        auto manufacturer = searchSmartphone.getManufacturer();
        if (!manufacturer.empty() && manufacturer != s.getManufacturer())
            continue;
        auto color = searchSmartphone.getColor();
        if (!color.empty() && color != s.getColor())
            continue;
        auto display = searchSmartphone.getDisplay();
        if (display!=0 && display != s.getDisplay())
            continue;
        auto ram = searchSmartphone.getRAM();
        if (ram != 0 && ram != s.getRAM())
            continue;
        auto storage = searchSmartphone.getStorage();
        if (storage !=0 && storage != s.getStorage())
            continue;
        auto cpu = searchSmartphone.getCPU();
        if (!cpu.empty() && cpu != s.getCPU())
            continue;
        auto os = searchSmartphone.getOS();
        if (!os.empty() && os != s.getOS())
            continue;
        auto chargerType = searchSmartphone.getChargerType();
        if (!chargerType.empty() && chargerType != s.getChargerType())
            continue;
        return s;
    }  
    return Smartphone();
}

list<Smartphone> Catalog::search(string model, string manufacturer) {
    auto res = list<Smartphone>();
    for (auto s : smartphones) {
        if (!model.empty() && model != s.getModel())
            continue;
        if (!manufacturer.empty() && manufacturer != s.getManufacturer())
            continue;
        res.push_back(s);
    }
    return res;
}      
list<Smartphone> Catalog::searchByPrice(double minPrice, double maxPrice){
    auto res = list<Smartphone>();
    if (maxPrice < 0 || maxPrice <= minPrice) {
        for (auto s : smartphones) {
            if (minPrice == s.getPrice())
                res.push_back(s);
        }
    }
    else {
        for (auto s : smartphones) {
            if (minPrice <= s.getPrice() && maxPrice >= s.getPrice())
                res.push_back(s);
        }
    }
    return res;
}
list<Smartphone> Catalog::searchByDisplay(double minDisplay, double maxDisplay){
    auto res = list<Smartphone>();
    if (maxDisplay < 0 || maxDisplay <= minDisplay) {
        for (auto s : smartphones) {
            if (minDisplay == s.getDisplay())
                res.push_back(s);
        }
    }
    else {
        for (auto s : smartphones) {
            if (minDisplay <= s.getDisplay() && maxDisplay >= s.getDisplay())
                res.push_back(s);
        }
    }
    return res;
}
list<Smartphone> Catalog::searchByRAM(int minRAM, int maxRAM){
    auto res = list<Smartphone>();
    if (maxRAM < 0 || maxRAM <= minRAM) {
        for (auto s : smartphones) {
            if (minRAM == s.getRAM())
                res.push_back(s);
        }
    }
    else {
        for (auto s : smartphones) {
            if (minRAM <= s.getRAM() && maxRAM >= s.getRAM())
                res.push_back(s);
        }
    }
    return res;
}
list<Smartphone> Catalog::searchByStorage(int minStorage, int maxStorage){
    auto res = list<Smartphone>();
    if (maxStorage < 0 || maxStorage <= minStorage) {
        for (auto s : smartphones) {
            if (minStorage == s.getStorage())
                res.push_back(s);
        }
    }
    else {
        for (auto s : smartphones) {
            if (minStorage <= s.getStorage() && maxStorage >= s.getStorage())
                res.push_back(s);
        }
    }
    return res;
}
list<Smartphone> Catalog::searchByYear(int minYear, int maxYear) {
    auto res = list<Smartphone>();
    if (maxYear < 0 || maxYear <= minYear) {
        for (auto s : smartphones) {
            if (minYear == s.getYear())
                res.push_back(s);
        }
    }
    else {
        for (auto s : smartphones) {
            if (minYear <= s.getYear() && maxYear >= s.getYear())
                res.push_back(s);
        }
    }
    return res;
}
