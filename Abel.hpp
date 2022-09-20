#include <iostream>
#include <string>

using namespace std;

class Item {
public:
    //constructors
    Item() {
        _SellPrice = 0.5;
        _PurchaseCost = 0.01;
        _Quantity = 100;
    };
    Item(double x, double y, double z) {
        _SellPrice = x;
        _PurchaseCost = y;
        _Quantity = z;
    };
    //get private variables
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
        cout << "Orange is sold at " << getSellPrice() <<
            " purchased at " << getPurchaseCost() <<
            " and has quantity of " << getQuantity() << "\n";
    }

private:
    double _SellPrice;
    double _PurchaseCost;
    double _Quantity;
};
