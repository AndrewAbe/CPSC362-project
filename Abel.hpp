#include <iostream>
#include <string>
#include <map>

template <typename Key, typename Value>
class Item {
public:
    Item() = default;
    float getPurchaseCost() {
        return _PurchaseCost();
    }
    float getQuantity() {
        return _Quantity();
    }

private:
    float _PurchaseCost = '1';
    float _Quantity = '10';
};
