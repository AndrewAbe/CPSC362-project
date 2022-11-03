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
    std::cout << "Please select the Item you wish to change the price for or input 0 to go back to the homepage: ";
    SetConsoleTextAttribute(h, 15);

    std::cout << "\n1.Apples\n2.Bananas\n3.Blueberries\n4.Grapes\n5.Lemons\n6.Oranges\n7.Mangos\n8.Watermelons\n9.Twinkies\n10.Beef Jerky\n11.Canned Beans\n12.Peanuts";


    cout << "\n\n\n\n";

    std::cout << "Please input your selection: ";

    string selection;
    double value;
    std::cin >> selection;
    Item temp;
    cout << "\n\n\n\n\n\n\n\n\n\n";
    if (selection == "0") {
        return main();
    }
    else if (selection == "1") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Apple: " << endl;
            cin >> value;
            list.at(0).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for each Apple: " << endl;
            cin >> value;
            list.at(0).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "2") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Banana: " << endl;
            cin >> value;
            list.at(1).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        if (selection == "1") {
            cout << "Please input the new purchase price for each Banana: " << endl;
            cin >> value;
            list.at(1).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "3") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Blueberry: " << endl;
            cin >> value;
            list.at(2).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for each Blueberry: " << endl;
            cin >> value;
            list.at(2).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "4") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Grape: " << endl;
            cin >> value;
            list.at(3).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for each Grape: " << endl;
            cin >> value;
            list.at(3).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "5") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Lemon: " << endl;
            cin >> value;
            list.at(4).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for each Lemon: " << endl;
            cin >> value;
            list.at(4).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "6") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Orange: " << endl;
            cin >> value;
            list.at(5).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        if (selection == "1") {
            cout << "Please input the new purchase price for each Orange: " << endl;
            cin >> value;
            list.at(0).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "7") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Mango: " << endl;
            cin >> value;
            list.at(6).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for each Mango: " << endl;
            cin >> value;
            list.at(6).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "8") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Watermelon: " << endl;
            cin >> value;
            list.at(7).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for each Watermelon: " << endl;
            cin >> value;
            list.at(7).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "9") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for each Twinkie: " << endl;
            cin >> value;
            list.at(8).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for each Twinkie: " << endl;
            cin >> value;
            list.at(8).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "10") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for Beef Jerky: " << endl;
            cin >> value;
            list.at(9).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for Beef Jerky: " << endl;
            cin >> value;
            list.at(9).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "11") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for a Can of Beans: " << endl;
            cin >> value;
            list.at(10).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for a Can of Beans: " << endl;
            cin >> value;
            list.at(10).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else if (selection == "12") {
        cout << "Please select 0 if you want to change the sell price or select 1 for purchase price \n";
        cin >> selection;
        if (selection == "0") {
            cout << "Please input the new sell price for Peanuts: " << endl;
            cin >> value;
            list.at(11).setSellPrice(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else if (selection == "1") {
            cout << "Please input the new purchase price for Peanuts: " << endl;
            cin >> value;
            list.at(11).setPurchaseCost(value);
            endexcel("Fruit_Inventory.csv", list, x);
            return secondpage();
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid selection please try again";
            Sleep(2000);
            return secondpage();
        }
    }
    else {
        SetConsoleTextAttribute(h, 4);
        cout << "Please select valid number \n";
        Sleep(2000);
        return secondpage();
    }
}