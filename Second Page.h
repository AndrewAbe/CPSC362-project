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
    
    double x;

    openexcel(fname, list, x);

    
    std::cout << "Please select the Item you wish to change the price for or input 0 to go back to the homepage:\n\n";
    //update 
    std::cout << "1.Apples\n2.Bananas\n3.Blueberries\n4.Grapes\n5.Lemons\n6.Oranges\n7.Mangos\n8.Watermelons\n9.Twinkies\n10.Beef Jerky\n11.Canned Beans\n12.Peanuts";
   

    cout << "\n\n\n\n";

    std::cout << "Please input your selection: ";

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
        return secondpage();
    }
    if (selection == 2) {
        cout << "Please input the new price for each Bananas: " << endl;
        temp = list.at(1);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }
    if (selection == 3) {
        cout << "Please input the new price for each Blueberries: " << endl;
        temp = list.at(2);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }
    if (selection == 4) {
        cout << "Please input the new price for each Grapes: " << endl;
        temp = list.at(3);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }
    if (selection == 5) {
        cout << "Please input the new price for each Lemons: " << endl;
        temp = list.at(4);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }
    if (selection == 6) {
        cout << "Please input the new price for each Oranges: " << endl;
        temp = list.at(5);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }
    if (selection == 7) {
        cout << "Please input the new price for each Mangos: " << endl;
        temp = list.at(6);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }

    if (selection == 8) {
        cout << "Please input the new price for each Watermelons: " << endl;
        temp = list.at(7);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }

    if (selection == 9) {
        cout << "Please input the new price for each Twinkies: " << endl;
        temp = list.at(8);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }

    if (selection == 10) {
        cout << "Please input the new price for each Beef Jerky: " << endl;
        temp = list.at(9);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }
        
    if (selection == 11) {
        cout << "Please input the new price for each Canned Beans: " << endl;
        temp = list.at(10);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }

    if (selection == 12) {
        cout << "Please input the new price for each Peanuts: " << endl;
        temp = list.at(11);
        cin >> value;
        temp.setSellPrice(value);
        return secondpage();
    }

    while (selection >= 13) {
        cout << "Invalid selection, to return to the homepage, please input 0: ";
        std::cin >> selection;
    }

    cout << "\n\n\n\n\n\n\n\n";
    
    return main();
}
