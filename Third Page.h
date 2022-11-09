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

void thirdrefac(int userinput) {
    string fname = "Fruit_Inventory.csv";
    vector<Item> list;
    double x;
    openexcel(fname, list, x);
    double value;

    cout << "There are " << list.at(userinput).getQuantity() << " of " << list.at(userinput).getName() << " left, how many would you like to purchase?" << endl;
    cin >> value;
    list.at(userinput).setQuantity((list.at(userinput).getQuantity() + value));
    x -= (value * list.at(userinput).getPurchaseCost());
    endexcel("Fruit_Inventory.csv", list, x);
}

int thirdpage()
{
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 27);
    std::cout << "Please select the Item you wish to purchase or input 0 to go back to the homepage: ";
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
        thirdrefac(0);
        return thirdpage();
    }
    else if (selection == "2") {
        thirdrefac(1);
        return thirdpage();
    }
    else if (selection == "3") {
        thirdrefac(2);
        return thirdpage();
    }
    else if (selection == "4") {
        thirdrefac(3);
        return thirdpage();
    }
    else if (selection == "5") {
        thirdrefac(4);
        return thirdpage();
    }
    else if (selection == "6") {
        thirdrefac(5);
        return thirdpage();
    }
    else if (selection == "7") {
        thirdrefac(6);
        return thirdpage();
    }
    else if (selection == "8") {
        thirdrefac(7);
        return thirdpage();
    }
    else if (selection == "9") {
        thirdrefac(8);
        return thirdpage();
    }
    else if (selection == "10") {
        thirdrefac(9);
        return thirdpage();
    }
    else if (selection == "11") {
        thirdrefac(10);
        return thirdpage();
    }
    else if (selection == "12") {
        thirdrefac(11);
        return thirdpage();
    }
    else {
        SetConsoleTextAttribute(h, 4);
        cout << "Please select valid number \n";
        Sleep(2000);
        return secondpage();
    }
}
