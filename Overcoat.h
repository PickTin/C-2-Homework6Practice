#ifndef OVERCOAT_H
#define OVERCOAT_H

#include <iostream>
#include <string>
using namespace std;

class Overcoat {
private:
    string name;
    string type;
    int size;
    double price;

public:
    Overcoat();
    Overcoat(string name, string type, int size, double price);

    string getName() const;
    string getType() const;
    int getSize() const;
    double getPrice() const;

    void setName(string name);
    void setType(string type);
    void setSize(int size);
    void setPrice(double price);

    bool operator==(const Overcoat& other) const;
    bool operator!=(const Overcoat& other) const;
    bool operator>(const Overcoat& other) const;
    bool operator>=(const Overcoat& other) const;
    bool operator<(const Overcoat& other) const;
    bool operator<=(const Overcoat& other) const;

    Overcoat& operator++();     
    Overcoat operator++(int);   
    Overcoat& operator--();     
    Overcoat operator--(int);   

    friend ostream& operator<<(ostream& out, const Overcoat& overcoat);
    friend istream& operator>>(istream& in, Overcoat& overcoat);
};

#endif
