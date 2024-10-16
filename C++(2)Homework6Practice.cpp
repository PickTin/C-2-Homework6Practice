#include <iostream>
#include "Overcoat.h"
#include "Shop.h"
//int main() {
//    Overcoat coat1("Trench Coat", "Male", 42, 150.0);
//    Overcoat coat2("Jacket", "Male", 40, 120.0);
//
//    cout << (coat1 == coat2) << endl;
//    cout << (coat1 != coat2) << endl;
//    cout << (coat1 > coat2) << endl;
//    cout << (coat1 >= coat2) << endl;
//    cout << (coat1 < coat2) << endl;
//    cout << (coat1 <= coat2) << endl;
//
//    cout << "Original size: " << coat1.getSize() << endl;
//    ++coat1;
//    cout << "After increment: " << coat1.getSize() << endl;
//    --coat1;
//    cout << "After decrement: " << coat1.getSize() << endl;
//
//    cout << "Enter coat details (name type size price): ";
//    Overcoat coat3;
//    cin >> coat3;
//    cout << coat3 << endl;
//}


int main() {
    Shop myShop;

    Overcoat coat1("Trench Coat", "Male", 42, 150.0);
    Overcoat coat2("Jacket", "Female", 38, 120.0);
    Overcoat coat3("Coat", "Male", 40, 180.0);

    myShop.addOvercoat(coat1);
    myShop.addOvercoat(coat2);
    myShop.addOvercoat(coat3);

    cout << "Shop inventory:" << endl;
    myShop.display();

    myShop.sortByPrice();
    cout << "\nSorted by price:" << endl;
    myShop.display();

    auto searchResults = myShop.searchByType("Male");
    cout << "\nSearch results for 'Male':" << endl;
    for (const auto& coat : searchResults) {
        cout << coat << endl;
    }

    myShop.editOvercoatSize(0, 44);
    cout << "\nAfter editing size of the first item:" << endl;
    myShop.display();

    myShop.removeOvercoat(1);
    cout << "\nAfter removing the second item:" << endl;
    myShop.display();
}
