#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include "ItemClass.h"
#include <Windows.h>
#include <stdlib.h>

using namespace std;
int main();

int fourthpage()
{
    system("CLS");
    string fname = "Fruit_Inventory.csv";
    vector<Item> list;

    double x;

    openexcel(fname, list, x);

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int i = 0; i < list.size(); i++) {
        system("CLS");
        cout << "\n\n\n\n";
        double goodquantity = list.at(i).getQuantity();
        double userinput = 0;
        double userinputperish = 0;
        string name = list.at(i).getName();
        cout << "Total amount of items at begging of day is " << goodquantity << " for " << name << "\n";
        MISTAKE:cout << "Please put amound of items sold at the end of day for " << name << "\n";
        cin >> userinput; 
        //perishables
        if (i < 8) {
            cout << "Please put amound of items that went bad during the day\n";
            cin >> userinputperish;
        }
        double fin = userinputperish + userinput;
        //math to see if there are valid between 0 and original quantity
        if (goodquantity >= fin) {
            goodquantity -= userinput;
            x += (userinput * list.at(i).getSellPrice());
            cout << (goodquantity - userinputperish) << " left sold at " << list.at(i).getSellPrice() << " gives total money " << x << "\n"; //check
            Sleep(5000);
            Sleep(1000);
            list.at(i).setQuantity((list.at(i).getQuantity() - fin));
            endexcel(fname, list, x);
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Please put number greater than starting inventory amount\n";
            SetConsoleTextAttribute(h, 15);
            Sleep(2000);
            goto MISTAKE;   
        }
    }

    return main();
}
