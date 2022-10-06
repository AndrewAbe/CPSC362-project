#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

#include "Abel.hpp"

#pragma once 

//UML

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

    endexcel(fname, list, tot);

    return 0;
    
    // UI in terminal test
    /*
    cout << "StoreMore v1.0\n\n";
    int x;

    std::cout << "1. Product and Prices\n";
    std::cout << "2. Item Invenory\n";
    std::cout << "3. End of Day\n";
    std::cout << "4. Total Costs\n";

    cout << "\n\n\n\n\n\n\n\n\n\n";

    std::cout << " Please input your numerical selection: ";

    std::cin >> x;
    if (x <= 0 || x >= 5) {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Invalid Selection! Please input a number between 1 and 4!\n" << endl;
        main();
    }
    if (x == 1) {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << " Will jump to Option 1" << endl;

    }
    if (x == 2) {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << " Will jump to Option 2" << endl;
    }
    if (x == 3) {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << " Will jump to Option 3" << endl;
    }
    if (x == 4) {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << " Will jump to Option 4" << endl;
    }
    */
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
