#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>
using namespace std;

Catalog InitializeCatalog() {
    Catalog catalog;
    Smartphone smart{ 2020,3,"iPhone 12 Pro", 100, "Apple", "White",
        6,3,64, "Apple", "iOS", "Lightning" };
    Smartphone smart1{ 2022,4,"iPhone 14 Pro", 200, "Apple", "Black",
    6.4,4,128, "Apple", "iOS", "Lightning" };
    Smartphone smart2{ 2023,4,"iPhone 15", 300, "Apple", "Golden",
        6.8,8,128, "Apple", "iOS", "Type-C" };

    catalog.addSmartphone(smart);
    catalog.addSmartphone(smart1);
    catalog.addSmartphone(smart2);
    return catalog;
}

int main(int argc, char* argv[]) {
    Catalog catalog = InitializeCatalog();
    Smartphone whatBuyerLikes{2000, 0, "iPhone 12 Pro", 100, "Apple", "White",
                             0, 0, 0, "", "iOS", ""};

    cout << "You might like this:\n";
    list<Smartphone> lst = catalog.search(whatBuyerLikes.getModel(), whatBuyerLikes.getManufacturer());
    for (auto s : lst) {
        s.Print();
        cout << endl;
    }

    cout << "\nYou might like this:\n";
    list<Smartphone> lst1 = catalog.searchByPrice(100, 200);
    for (auto s : lst1) {
        s.Print();
        cout << endl;
    }


    return 0;
}