#include <iostream>
#include <string>
#include <fstream>
#include <map>

#include "Abel.hpp"

using namespace std;


// Main
int main() {

    Item Orange (1, 1);
    float i = Orange.getPurchaseCost();
    float j = Orange.getQuantity();
    cout << "Orange is purchase cost " << i << " and has quantity of " << j << "\n";

    Item Lemon;
    float a = Lemon.getPurchaseCost();
    float b = Lemon.getQuantity();
    cout << "Orange is purchase cost " << a << " and has quantity of " << b << "\n";

    return 0;
}
