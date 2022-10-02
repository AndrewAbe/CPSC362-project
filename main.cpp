#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

#include "Abel.hpp"

#pragma once 

using namespace std;

int main() {
    string fname = "Fruit_Inventory.csv";
    vector<Item> list;
    double tot = 0.0;
    //hardcode for ease can change back later
    //cout << "Enter the file name: ";
    //cin >> fname;
    
    openexcel(fname, list, tot);
    //Item item1 = list.at(0);
    //item1.print();
    cout << "Total: " << tot << "\n";
    printVec(list);

    return 0;
}



/* OLD TESTS

//Works for classes and changes to classes
    Item Orange("Orange", 1, 1, 1);
    Orange.print();
    Item Lemon;
    Lemon.print();
    Lemon.setSellPrice(111.0);
    Lemon.setPurchaseCost(111.0);
    Lemon.setQuantity(111.0);
    Lemon.setName("Lemon");
    Lemon.print();




*/
