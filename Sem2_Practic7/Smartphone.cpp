#include "Smartphone.h"
Smartphone::Smartphone() {
    this->model = "";  this->price = 0;
    this->manufacturer = "";  this->color = "";
    this->display = "";  this->ram = "";
    this->storage = "";  this->cpu = "";
    this->os = "";
}
Smartphone::Smartphone(string model, double price, string manufacturer,
    string color, string display, string ram,
    string storage, string cpu, string os) {
    this->model = model;    this->price = price;
    this->manufacturer = manufacturer;
    this->color = color;    this->display = display;
    this->ram = ram;  this->storage = storage;
    this->cpu = cpu;  this->os = os;
}
string Smartphone::getModel() const {
    return model;
}
string Smartphone::getManufacturer() const{
    return manufacturer;
} 
string Smartphone::getDisplay() const{
    return manufacturer;
}
string Smartphone::getColor() const{
    return color;
}
string Smartphone::getRAM() const{
    return ram;
}
string Smartphone::getStorage() const{
    return storage;
}
string Smartphone::getCPU() const{
    return cpu;
}
string Smartphone::getOS() const{
    return os;
}
double Smartphone::getPrice() const {
    return price;
}

void Smartphone::setPrice(double price) {
    this->price = price;
}
