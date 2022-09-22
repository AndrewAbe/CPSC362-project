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
    //hardcode for ease can change back later
    //cout << "Enter the file name: ";
    //cin >> fname;
    
    //openexcel(fname, list);
    //<Item> item1 = list.at(0);
    //item1.print();

    string line;

    fstream file(fname, ios::in);
    if (file.is_open()) {
        //get first line to skip since it has headers
        getline(file, line);
        string ItemName, SellPrice, PurPrice, Inventory, TotalName, ActualTotalNum; //last 2 are for inherented function
        //cout << line;  //works
        while (getline(file, line)) {
            stringstream str(line);
            getline(str, ItemName, ',');
            getline(str, SellPrice, ',');
            getline(str, PurPrice, ',');
            getline(str, Inventory, ',');
            Item itemi(ItemName, stod(SellPrice), stod(PurPrice), stod(Inventory));
            list.push_back(itemi);
        }
        //cout << "list size " << list.size() << "\n";
        printVec(list); 
    }
    else {
        cout << "Could not open the file\n";
    }
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
