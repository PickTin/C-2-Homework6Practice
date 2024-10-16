#include "Overcoat.h"

Overcoat::Overcoat() : name(""), type(""), size(0), price(0.0) {}

Overcoat::Overcoat(string name, string type, int size, double price)
    : name(name), type(type), size(size), price(price) {}

string Overcoat::getName() const { return name; }
string Overcoat::getType() const { return type; }
int Overcoat::getSize() const { return size; }
double Overcoat::getPrice() const { return price; }

void Overcoat::setName(string name) { this->name = name; }
void Overcoat::setType(string type) { this->type = type; }
void Overcoat::setSize(int size) { this->size = size; }
void Overcoat::setPrice(double price) { this->price = price; }

bool Overcoat::operator==(const Overcoat& other) const {
    return type == other.type;
}

bool Overcoat::operator!=(const Overcoat& other) const {
    return !(*this == other);
}

bool Overcoat::operator>(const Overcoat& other) const {
    return price > other.price;
}

bool Overcoat::operator>=(const Overcoat& other) const {
    return price >= other.price;
}

bool Overcoat::operator<(const Overcoat& other) const {
    return price < other.price;
}

bool Overcoat::operator<=(const Overcoat& other) const {
    return price <= other.price;
}

Overcoat& Overcoat::operator++() {
    ++size;
    return *this;
}

Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    ++(*this);
    return temp;
}

Overcoat& Overcoat::operator--() {
    --size;
    return *this;
}

Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    --(*this);
    return temp;
}

ostream& operator<<(ostream& out, const Overcoat& overcoat) {
    out << "Name: " << overcoat.name << ", Type: " << overcoat.type
        << ", Size: " << overcoat.size << ", Price: " << overcoat.price;
    return out;
}

istream& operator>>(istream& in, Overcoat& overcoat) {
    in >> overcoat.name >> overcoat.type >> overcoat.size >> overcoat.price;
    return in;
}
