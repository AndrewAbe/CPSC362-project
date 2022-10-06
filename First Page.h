#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>



using namespace std;
int firstpage();
int main();

int firstpage()
{
    string filename;
    filename = "Fruit_Inventory.csv";
    cout << " \n\n\n\n\n\n";

    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file(filename, ios::in);
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
            cout << left << setw(15) << content[i][j];
        }
        cout << "\n";
    }

    cout << "\n\n\n\n";


    std::cout << "To return to the homepage, please input zero: ";

    int selection;
    std::cin >> selection;

    cout << "\n\n\n\n\n\n\n\n\n\n\n";

    if (selection == 0) {
        return main();
    }
    while (selection != 0) {
        cout << "Invalid selection, to return to the homepage, please input 0: ";
        std::cin >> selection;
    }

    cout << "\n\n\n\n\n\n\n\n";
    
    return main();
}
