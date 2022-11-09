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

void secondrefac(int usernum) {
    string fname = "Fruit_Inventory.csv";
    vector<Item> list;
    double x;
    openexcel(fname, list, x);

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    string selection;
    double value;

    cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n\n";
    cin >> selection;
    if (selection == "0") {
        cout << "Please input the new sell price for each " << list.at(usernum).getName() << ":" << endl;
        cin >> value;
        list.at(0).setSellPrice(value);
        endexcel("Fruit_Inventory.csv", list, x);
        return;
    }
    else if (selection == "1") {
        cout << "Please input the new purchase price for each " << list.at(usernum).getName() << ":" << endl;
        cin >> value;
        list.at(0).setPurchaseCost(value);
        endexcel("Fruit_Inventory.csv", list, x);
        return;
    }
    else {
        SetConsoleTextAttribute(h, 4);
        cout << "Invalid selection please try again";
        Sleep(2000);
        return;
    }
}

int secondpage()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("CLS");
    SetConsoleTextAttribute(h, 27);
    std::cout << "Please select the Item you wish to change the price for or input 0 to go back to the homepage: ";
    SetConsoleTextAttribute(h, 15);
    std::cout << "\n1.Apples\n2.Bananas\n3.Blueberries\n4.Grapes\n5.Lemons\n6.Oranges\n7.Mangos\n8.Watermelons\n9.Twinkies\n10.Beef Jerky\n11.Canned Beans\n12.Peanuts\n\n\n\n";
    std::cout << "Please input your selection: ";

    //have to make string or else it will completely crash if anything but int was input from user
    string selection;
    std::cin >> selection;
    cout << "\n\n\n\n\n\n\n\n\n\n";
    if (selection == "0") {
        return main();
    }
    else if (selection == "1") {
        secondrefac(0);
        return secondpage();
    }
    else if (selection == "2") {
        secondrefac(1);
        return secondpage();
    }
    else if (selection == "3") {
        secondrefac(2);
        return secondpage();
    }
    else if (selection == "4") {
        secondrefac(3);
        return secondpage();
    }
    else if (selection == "5") {
        secondrefac(4);
        return secondpage();
    }
    else if (selection == "6") {
        secondrefac(5);
        return secondpage();
    }
    else if (selection == "7") {
        secondrefac(6);
        return secondpage();
    }
    else if (selection == "8") {
        secondrefac(7);
        return secondpage();
    }
    else if (selection == "9") {
        secondrefac(8);
        return secondpage();
    }
    else if (selection == "10") {
        secondrefac(9);
        return secondpage();
    }
    else if (selection == "11") {
        secondrefac(10);
        return secondpage();
    }
    else if (selection == "12") {
        secondrefac(11);
        return secondpage();
    }
    else {
        SetConsoleTextAttribute(h, 4);
        cout << "Please select valid number \n";
        Sleep(2000);
        return secondpage();
    }
}
