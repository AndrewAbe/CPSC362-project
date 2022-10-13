#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <windows.h>
#include "First Page.h"
#include "Second Page.h"
#include "Extra.h"

using namespace std;
int firstpage();
int secondpage();
int extrapage();


int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    
    SetConsoleTextAttribute(h, 27);
    cout << "StoreMore v1.0";
  SetConsoleTextAttribute(h, 15);

    cout << " \n\n";

    int x;

    std::cout << "1. List of Product and Prices\n";
    std::cout << "2. Setting Prices\n";
    std::cout << "3. End of Day\n";
    std::cout << "4. Total Costs\n";
   
    cout << "\n\n\n\n\n\n\n\n\n\n"; 
   
    std::cout << " Please input your numerical selection: ";

    std::cin >>x ;
       
        if (x == 1) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            return firstpage();

        }
        if (x == 2) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            return secondpage();
        }
        if (x == 3) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << " Will jump to Option 3" << endl;
        }
        if (x == 4) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << " Will jump to Option 4" << endl;
        }
        if (x == 777) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            return extrapage();
     
        }
        else {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            SetConsoleTextAttribute(h, 4);
            cout << "Invalid Selection! Please input a number between 1 and 4!\n" << endl;
            SetConsoleTextAttribute(h, 15);
            main();
        }
}
