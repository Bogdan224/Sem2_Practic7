#include "Smartphone.h"
Smartphone::Smartphone() {
    this->model = "";  this->price = 0;
    this->manufacturer = "";  this->color = "";
    this->display = 0;  this->ram = 0;
    this->storage = 0;  this->cpu = "";
    this->os = ""; this->year = 0;
    this->camerasCount = 0;
    this->chargerType = "";
}
Smartphone::Smartphone(int year, int camerasCount, string model, double price, string manufacturer,
    string color, double display, int ram,
    int storage, string cpu, string os, string chargerType) {
    this->model = model;
    setPrice(price);
    this->manufacturer = manufacturer;
    this->color = color;
    if (display < 0 || display > 100)
        display = 0;
    this->display = display;
    if (ram < 0 || ram > 128)
        ram = 0;
    this->ram = ram;
    if (storage < 0 || storage > INT32_MAX)
        storage = 0;
    this->storage = storage;
    this->cpu = cpu;  this->os = os;
    time_t t = time(nullptr);
    if (year < 2000 && year > localtime(&t)->tm_year + 1900)
        year = 2000;
    this->year = year; 
    if (camerasCount < 0 || camerasCount > 10)
        camerasCount = 0;
    this->camerasCount = camerasCount;
    this->chargerType = chargerType;
}
int Smartphone::getYear() const {
    return year;
}
int Smartphone::getCamerasCount() const {
    return camerasCount;
}
string Smartphone::getModel() const {
    return model;
}
string Smartphone::getManufacturer() const{
    return manufacturer;
} 
double Smartphone::getDisplay() const{
    return display;
}
string Smartphone::getColor() const{
    return color;
}
int Smartphone::getRAM() const{
    return ram;
}
int Smartphone::getStorage() const{
    return storage;
}
string Smartphone::getCPU() const{
    return cpu;
}
string Smartphone::getOS() const{
    return os;
}
string Smartphone::getChargerType()const {
    return chargerType;
}
double Smartphone::getPrice() const {   
    return price;
}

void Smartphone::setPrice(double price) {
    if (price < 0 || price > DBL_MAX) {
        cout << "Unresolved value! The minimum value was set for the price!\n";
        price = 0;
    }
    this->price = price;
}

void Smartphone::Print() {
    cout << manufacturer << " ";
    cout << model << endl;
    cout << "Year: " << year << endl;
    cout << "Cameras count: " << camerasCount << endl;
    cout << "Price: " << price << endl;
    cout << "Color: " << color << endl;
    cout << "Display: " << display << endl;
    cout << "OS: " << os << endl;
    cout << ram << "Gb RAM, " << storage
        << " GB storage" << endl;
    cout << "CPU: " << cpu << endl;
    cout << "Charger type: " << chargerType << endl;
}
