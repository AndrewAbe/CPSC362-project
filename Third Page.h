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

int thirdpage()
{
    system("CLS");
    string fname = "Fruit_Inventory.csv";
    vector<Item> list;

    double x;

    openexcel(fname, list, x);

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


    SetConsoleTextAttribute(h, 27);
    std::cout << "Please select the Item you wish to purchase or input 0 to go back to the homepage: ";
    SetConsoleTextAttribute(h, 15);

    std::cout << "\n1.Apples\n2.Bananas\n3.Blueberries\n4.Grapes\n5.Lemons\n6.Oranges\n7.Mangos\n8.Watermelons\n9.Twinkies\n10.Beef Jerky\n11.Canned Beans\n12.Peanuts";


    cout << "\n\n\n\n";

    std::cout << "Please input your selection: ";

    //have to make string or else it will completely crash if anything but int was input from user
    string selection;
    double value;
    std::cin >> selection;
    Item temp;
    cout << "\n\n\n\n\n\n\n\n\n\n";
    if (selection == "0") {
        return main();
    }
    else if (selection == "1") {
        cout << "There are " << list.at(0).getQuantity() << " of " << list.at(0).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(0).setQuantity((list.at(0).getQuantity() + value));
        x -= (value * list.at(0).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "2") {
        cout << "There are " << list.at(1).getQuantity() << " of " << list.at(1).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(1).setQuantity((list.at(1).getQuantity() + value));
        x -= (value * list.at(1).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "3") {
        cout << "There are " << list.at(2).getQuantity() << " of " << list.at(2).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(2).setQuantity((list.at(2).getQuantity() + value));
        x -= (value * list.at(2).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "4") {
        cout << "There are " << list.at(3).getQuantity() << " of " << list.at(3).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(3).setQuantity((list.at(3).getQuantity() + value));
        x -= (value * list.at(3).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "5") {
        cout << "There are " << list.at(4).getQuantity() << " of " << list.at(4).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(4).setQuantity((list.at(4).getQuantity() + value));
        x -= (value * list.at(4).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "6") {
        cout << "There are " << list.at(5).getQuantity() << " of " << list.at(5).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(5).setQuantity((list.at(5).getQuantity() + value));
        x -= (value * list.at(5).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "7") {
        cout << "There are " << list.at(6).getQuantity() << " of " << list.at(6).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(6).setQuantity((list.at(6).getQuantity() + value));
        x -= (value * list.at(6).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "8") {
        cout << "There are " << list.at(7).getQuantity() << " of " << list.at(7).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(7).setQuantity((list.at(7).getQuantity() + value));
        x -= (value * list.at(7).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "9") {
        cout << "There are " << list.at(8).getQuantity() << " of " << list.at(8).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(8).setQuantity((list.at(8).getQuantity() + value));
        x -= (value * list.at(8).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "10") {
        cout << "There are " << list.at(9).getQuantity() << " of " << list.at(9).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(9).setQuantity((list.at(9).getQuantity() + value));
        x -= (value * list.at(9).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "11") {
        cout << "There are " << list.at(10).getQuantity() << " of " << list.at(10).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(10).setQuantity((list.at(10).getQuantity() + value));
        x -= (value * list.at(10).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else if (selection == "12") {
        cout << "There are " << list.at(11).getQuantity() << " of " << list.at(11).getName() << " left, how many would you like to purchase?" << endl;
        cin >> value;
        list.at(11).setQuantity((list.at(11).getQuantity() + value));
        x -= (value * list.at(11).getPurchaseCost());
        endexcel("Fruit_Inventory.csv", list, x);
        return thirdpage();
    }
    else {
        SetConsoleTextAttribute(h, 4);
        cout << "Please select valid number \n";
        Sleep(2000);
        return secondpage();
    }
}