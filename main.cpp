#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

#include "Abel.hpp"

using namespace std;

//kivy

// Main
int main() {

    string fname;
    cout << "Enter the file name: ";
    cin >> fname;

    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file(fname, ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            row.clear();

            stringstream str(line);

            while (getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else
        cout << "Could not open the file\n";

    for (int i = 0; i < content.size(); i++)
    {
        for (int j = 0; j < content[i].size(); j++)
        {
            cout << content[i][j] << " ";
        }
        cout << "\n";
    }

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
