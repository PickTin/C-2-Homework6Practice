#include "Shop.h"

void Shop::addOvercoat(const Overcoat& overcoat) {
    shop.push_back(overcoat);
}

void Shop::removeOvercoat(int index) {
    if (index >= 0 && index < shop.size()) {
        shop.erase(shop.begin() + index);
    }
}

void Shop::editOvercoatSize(int index, int newSize) {
    if (index >= 0 && index < shop.size()) {
        shop[index].setSize(newSize);
    }
}

vector<Overcoat> Shop::searchByType(const string& type) const {
    vector<Overcoat> result;
    for (const auto& coat : shop) {
        if (coat.getType() == type) {
            result.push_back(coat);
        }
    }
    return result;
}

void Shop::sortByPrice() {
    sort(shop.begin(), shop.end(), [](const Overcoat& a, const Overcoat& b) {
        return a.getPrice() < b.getPrice();
        });
}

void Shop::display() const {
    for (const auto& coat : shop) {
        cout << coat << endl;
    }
}
