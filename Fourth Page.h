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
        double goodquantity = list.at(i).getQuantity();
        double userinput = 0;
        double userinputperish = 0;
        string name = list.at(i).getName();


        MISTAKE:SetConsoleTextAttribute(h, 27);
        cout << "Total number of items at the beginning of day was " << goodquantity << " for " << name << "\n\n";
        SetConsoleTextAttribute(h, 15);
        cout << "Please input the total number of this item sold today:" ;
        cin >> userinput;

        cout << "\n\n";


        //perishables
        if (i < 8) {
            cout << "Please input the total number of this perishable item that was tossed or went bad today:";
            cin >> userinputperish;
            cout << "\n\n";
        }
        double fin = userinputperish + userinput;
        //math to see if there are valid between 0 and original quantity
        if (goodquantity >= fin) {
            goodquantity -= userinput;
            x += (userinput * list.at(i).getSellPrice());
            cout << "You have " << (goodquantity - userinputperish) << " left of this item and have a total gross profit of $" << x << "\n"; //check
            list.at(i).setQuantity(goodquantity - userinputperish);
            //cout << (list.at(i).getQuantity());
            //Sleep(10000);
            Sleep(2500);
            endexcel(fname, list, x);
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Please put number greater than starting inventory amount\n";
            SetConsoleTextAttribute(h, 15);
            Sleep(2000);
            system("CLS");
            goto MISTAKE;
        }
    }
    system("CLS");
    return main();
}
