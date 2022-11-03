#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
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

//inhereted function
class Perishables : public Item {
public:
    //constructors
    Perishables() {
        _expired = 0;
    };
    //get private variables
    double getExpired() {
        return _expired;
    }
    //set functions
    void setExpired(double e) {
        _expired = e;
    };
    //print
    void print() {
        cout << getName() << " is sold at " << getSellPrice() <<
            " purchased at " << getPurchaseCost() <<
            " and has quantity of " << getQuantity() << " with " << _expired << " items that went bad today" << "\n";
    }

private:
    double _expired; //used to see how many items went bad
};

//public open function so it doesn't clunk up main
void printVec(vector<Item>& list) {
    for (int i = 0; i < list.size(); i++)
    {
        Item temp = list.at(i);
        temp.print();
    }
}


void openexcel(string fname, vector<Item>& list, double& tot) {
    string line;

    fstream file(fname, ios::in);
    if (file.is_open()) {
        //get first line with headers
        getline(file, line);
        string ItemName, SellPrice, PurPrice, Inventory, TotalName, ActualTotalNum;
        stringstream str(line);
        getline(str, ItemName, ',');
        getline(str, SellPrice, ',');
        getline(str, PurPrice, ',');
        getline(str, Inventory, ',');
        getline(str, TotalName, ',');
        getline(str, ActualTotalNum, ',');
        tot = stod(ActualTotalNum);  //puts the total into double tot
        //cout << "first line " << line << " " << "total is: " << tot << "\n"; //works

        getline(file, line); //get the space
        //cout << "second line" << line << "\n";  //works

        getline(file, line); //get the word parishable
        //cout << "third line" << line << "\n"; //works


        while (getline(file, line)) {
            if (line.size() > 5) { //size 5 is empty string from ,,,,, 
                stringstream str(line);
                getline(str, ItemName, ',');
                //this line is to skip the non-perishable line but had to be placed in the middle of the grab functions, most efficient
                if (ItemName == "Non-Perishables") {}
                else {
                    getline(str, SellPrice, ',');
                    getline(str, PurPrice, ',');
                    getline(str, Inventory, ',');
                    Item itemi(ItemName, stod(SellPrice), stod(PurPrice), stod(Inventory));
                    list.push_back(itemi);
                }
            }
        }
        //    cout << "list size " << list.size() << "\n";  //use when testing
        //    printVec(list);  //use when testing
    }
    else {
        cout << "Could not open the file\n";
    }
}

void endexcel(string fname, vector<Item> list, double tot) {
    std::ofstream myfile;
    myfile.open(fname);
    //myfile.open("Test_Inventory.csv");   //testing works
    myfile << "Product,Sell Price,Buy Price,Inventory,Monetary Sum," << tot << "\n";
    myfile << "\n";
    myfile << "Perishables\n";
    for (int i = 0; i < 8; i++) {
        myfile << list.at(i).getName() << "," << list.at(i).getSellPrice() << ","
            << list.at(i).getPurchaseCost() << "," << list.at(i).getQuantity() << "," << "\n";
    }
    myfile << "\n";
    myfile << "Non-Perishables\n";
    for (int i = 8; i < list.size(); i++) {
        myfile << list.at(i).getName() << "," << list.at(i).getSellPrice() << ","
            << list.at(i).getPurchaseCost() << "," << list.at(i).getQuantity() << "," << "\n";
    }

    myfile.close();
}