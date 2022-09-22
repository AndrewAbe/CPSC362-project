#include <iostream>
#include <string>
#include <vector>

#pragma once 

using namespace std;

class Item {
public:
    //constructors
    Item() {
        _SellPrice = 0.5;
        _PurchaseCost = 0.01;
        _Quantity = 100;
        _name = "normitem";
    };
    Item(string s, double x, double y, double z) {
        _name = s;
        _SellPrice = x;
        _PurchaseCost = y;
        _Quantity = z;
    };
    //get private variables
    string getName() {
        return _name;
    }
    double getSellPrice() {
        return _SellPrice;
    }
    double getPurchaseCost() {
        return _PurchaseCost;
    }
    double getQuantity() {
        return _Quantity;
    }
    //set functions
    void setName(string n) {
        _name = n;
    };
    void setSellPrice(double price) {
        _SellPrice = price;
    };
    void setPurchaseCost(double cost) {
        _PurchaseCost = cost;
    };
    void setQuantity(double quantity) {
        _Quantity = quantity;
    };
    //print
    void print() {
        cout << getName() << " is sold at " << getSellPrice() <<
            " purchased at " << getPurchaseCost() <<
            " and has quantity of " << getQuantity() << "\n";
    }

private:
    string _name;
    double _SellPrice;
    double _PurchaseCost;
    double _Quantity;
};

//public open function so it doesn't clunk up main
void printVec(vector<Item>& list) {
    for (int i = 0; i < list.size(); i++)
    {
        Item temp = list.at(i);
        temp.print();
    }
}

/*
void openexcel(string a, vector<Item>& list) {
    string fname = a; 

    vector<Item> list;
    string line;

    fstream file(fname, ios::in);
    if (file.is_open())
    {
        //get first line to skip since it has headers
        getline(file, line);
        //cout << line;  //works
        string ItemName, SellPrice, PurPrice, Inventory;
        stringstream str(line);
        getline(str, ItemName, ',');
        getline(str, SellPrice, ',');
        getline(str, PurPrice, ',');
        getline(str, Inventory, ',');
        Item Orange(ItemName, stod(SellPrice), stod(PurPrice), stod(Inventory));
         
        /*
        while (getline(file, line))
        {
            stringstream str(line);
            string ItemName, SellPrice, PurPrice, Inventory;
            getline(str, ItemName, ',');
            getline(str, SellPrice, ',');
            getline(str, PurPrice, ',');
            getline(str, Inventory, ',');
            Item Orange(ItemName
            //Orange.print();
        } *//*
    }
    else
        cout << "Could not open the file\n";
}
*/
