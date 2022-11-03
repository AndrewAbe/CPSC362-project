//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <iomanip>
//#include <windows.h>
#include "First Page.h"
#include "Second Page.h"
#include "Extra.h"
#include <stdlib.h>
using namespace std;
int firstpage();
int secondpage();
int extrapage();


int main()
{
    system("CLS");

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 27);
    cout << "StoreMore v1.0";
    SetConsoleTextAttribute(h, 15);

    cout << " \n\n";

    string userinput;

    std::cout << "1. List of Product and Prices\n";
    std::cout << "2. Setting Prices\n";
    std::cout << "3. End of Day\n";
    std::cout << "4. Total Costs\n";
    std::cout << "5. Close program\n";

    cout << "\n\n\n\n\n\n\n\n\n\n";

    std::cout << " Please input your numerical selection: ";

    std::cin >> userinput;

    if (userinput == "1") {

        return firstpage();

    }
    if (userinput == "2") {

        return secondpage();
    }
    if (userinput == "3") {

        cout << " Will jump to Option 3" << endl;
    }
    if (userinput == "4") {

        cout << " Will jump to Option 4" << endl;
    }
    if (userinput == "777") {

        return extrapage();

    }
    if (userinput == "5") {
        cout << "Closing application..." << endl;
        Sleep(2000);
        return 0;
    }
    else {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
        SetConsoleTextAttribute(h, 4);
        cout << "Invalid Selection! Please input a number between 1 and 4!\n" << endl;
        SetConsoleTextAttribute(h, 15);
        Sleep(2000);
        main();
    }
}
