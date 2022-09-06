#include <iostream>
#include <string>
#include <fstream>
#include <map>

#include "Abel.hpp"

using namespace std;


// Main
int main() {

    Item Orange (1, 1, 1);
    float h = Orange.getSellPrice();
    float i = Orange.getPurchaseCost();
    float j = Orange.getQuantity();
    cout << "Orange is sold at " << h << " purchased at " << i << " and has quantity of " << j << "\n";

    Item Lemon;
    float a = Lemon.getSellPrice();
    float b = Lemon.getPurchaseCost();
    float c = Lemon.getQuantity();
    cout << "Lemon is sold at " << a << " purchased at " << b << " and has quantity of " << c << "\n";

    return 0;
}
