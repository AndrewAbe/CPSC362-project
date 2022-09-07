#include <iostream>
#include <string>
#include <fstream>
#include <map>

#include "Abel.hpp"

using namespace std;


// Main
int main() {

    Item Orange (1, 1, 1);
    double h = Orange.getSellPrice();
    double i = Orange.getPurchaseCost();
    double j = Orange.getQuantity();
    cout << "Orange is sold at " << h << " purchased at " << i << " and has quantity of " << j << "\n";

    Item Lemon;
    double a = Lemon.getSellPrice();
    double b = Lemon.getPurchaseCost();
    double c = Lemon.getQuantity();
    cout << "Lemon is sold at " << a << " purchased at " << b << " and has quantity of " << c << "\n";
    Lemon.setSellPrice(111.0);
    Lemon.setPurchaseCost(111.0);
    Lemon.setQuantity(111.0);
    a = Lemon.getSellPrice();
    b = Lemon.getPurchaseCost();
    c = Lemon.getQuantity();
    cout << "Lemon is sold at " << a << " purchased at " << b << " and has quantity of " << c << "\n";

    return 0;
}
