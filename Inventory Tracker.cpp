
#include <iostream>
using namespace std;


int main()
{
    cout << "StoreMore v1.0\n\n";
    int x;

    std::cout << "1. Product and Prices\n";
    std::cout << "2. Item Invenory\n";
    std::cout << "3. End of Day\n";
    std::cout << "4. Total Costs\n";
   
    cout << "\n\n\n\n\n\n\n\n\n\n"; 
   
    std::cout << " Please input your numerical selection: ";

    std::cin >>x ;
        if (x <= 0 || x >= 5) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "Invalid Selection! Please input a number between 1 and 4!\n" << endl;
            main();
        }
        if (x == 1) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << " Will jump to Option 1" << endl;

        }
        if (x == 2) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << " Will jump to Option 2" << endl;
        }
        if (x == 3) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << " Will jump to Option 3" << endl;
        }
        if (x == 4) {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << " Will jump to Option 4" << endl;
        }
}

