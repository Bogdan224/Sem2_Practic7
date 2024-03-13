#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>
using namespace std;

Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addSmartphone("iPhone 12 Pro", 100, "Apple", "White",
        "6", "3", "64", "Apple", "iOS");
    return catalog;
}

int main(int argc, char* argv[]) {
    Catalog catalog = InitializeCatalog();
    Smartphone whatBuyerLikes{ "iPhone 12 Pro", 100, "Apple", "White",
                             "" , "", "", "", "iOS" };

    Smartphone smartphone = catalog.search(whatBuyerLikes);
    if (smartphone.getModel() != "") {
        cout << "You might like this: ";
        cout << smartphone.getManufacturer() << " ";
        cout << smartphone.getModel() << endl;
        cout << "Price: " << smartphone.getPrice() << endl;
        cout << "Color: " << smartphone.getColor() << endl;
        cout << "Display: " << smartphone.getDisplay() << endl;
        cout << "OS: " << smartphone.getOS() << endl;
        cout << smartphone.getRAM() << "Gb RAM, " << smartphone.getStorage()
            << " GB storage" << endl;
        cout << "CPU: " << smartphone.getCPU() << endl;
    }
    else cout << "Sorry, we have nothing for you.";
    return 0;
}