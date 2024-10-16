#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Overcoat.h"

using namespace std;

class Shop {
private:
    vector<Overcoat> shop;

public:
    void addOvercoat(const Overcoat& overcoat);
    void removeOvercoat(int index);
    void editOvercoatSize(int index, int newSize);
    vector<Overcoat> searchByType(const string& type) const;
    void sortByPrice();
    void display() const;
};

#endif
