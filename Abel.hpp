#include <iostream>
#include <string>

class Item {
public:
    Item() {
        _PurchaseCost = 0.01;
        _Quantity = 100;
    };
    Item(float x, float y) {
        _PurchaseCost = x;
        _Quantity = y;
    };
    float getPurchaseCost() {
        return _PurchaseCost;
    }
    float getQuantity() {
        return _Quantity;
    }

private:
    float _PurchaseCost;
    float _Quantity;
};
