//Programmer : NURUL AQILAH HUSNA BINTI MOHAMAD NOR HISAM
//Purpose : Let user to add an extra luggage if it is needed

#include<iostream>
#include<iomanip>
#include "ExtraLuggage.hpp"
using namespace std;

void showLuggageMenu() {
    cout << "\n=== EXTRA LUGGAGE OPTIONS ===\n";
    cout << "1. 10 kg  - RM50\n";
    cout << "2. 20 kg  - RM90\n";
    cout << "3. 30 kg  - RM130\n";
    cout << "4. NONE \n";
}

double calculateExtraLuggage() {
    int choice;
    double fee = 0;

    showLuggageMenu();
    cout << "Select luggage weight (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: fee = 50; break;
        case 2: fee = 90; break;
        case 3: fee = 130; break;
        case 4: fee = 0; break;
        default:
            cout << "Invalid choice.\n";
            fee = 0;
    }

    return fee;
}

