#include <iostream>
#include <string>

class Item {
public:
    Item() {
        _SellPrice = 0.5;
        _PurchaseCost = 0.01;
        _Quantity = 100;
    };
    Item(float x, float y, float z) {
        _SellPrice = x;
        _PurchaseCost = y;
        _Quantity = z;
    };
    float getSellPrice() {
        return _SellPrice;
    }
    float getPurchaseCost() {
        return _PurchaseCost;
    }
    float getQuantity() {
        return _Quantity;
    }

private:
    float _SellPrice;
    float _PurchaseCost;
    float _Quantity;
};
