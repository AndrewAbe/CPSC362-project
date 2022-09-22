#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include "ItemClass.h"


using namespace std;
int secondpage();
int main();

int secondpage()
{
    string fname = "Fruit_Inventory.csv";
    vector<Item> list;

    openexcel(fname, list);

    
    std::cout << "Please select the Item you wish to change the price for:\n\n";
    
    std::cout << "1.Apples\n2.Bananas\n3.Blueberries\n4.Grapes\n5.Lemons\n6.Oranges\n7.Mangos\n8.Watermelons\n";
   

    cout << "\n\n\n\n";


    std::cout << "To return to the homepage, please input zero: ";

    int selection;
    double value;
    std::cin >> selection;
    Item temp;
    cout << "\n\n\n\n\n\n\n\n\n\n\n";

    if (selection == 1) {
        cout << "Please input the new price for each Apple: " << endl;
        temp = list.at(0);
        cin >> value; 
        temp.setSellPrice(value);
        return main();
    }
    if (selection == 2) {
        return main();
    }
    if (selection == 3) {
        return main();
    }
    if (selection == 4) {
        return main();
    }
    if (selection == 5) {
        return main();
    }
    if (selection == 6) {
        return main();
    }
    if (selection == 7) {
        return main();
    }
    if (selection == 8) {
        return main();
    }

    while (selection >= 9) {
        cout << "Invalid selection, to return to the homepage, please input 0: ";
        std::cin >> selection;
    }

    cout << "\n\n\n\n\n\n\n\n";

    return main();
}