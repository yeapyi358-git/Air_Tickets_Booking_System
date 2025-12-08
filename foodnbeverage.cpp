//Programmer : NURUL AQILAH HUSNA BINTI MOHAMAD NOR HISAM 
//Purpose : let user to add on food and beverage in their ticket purchase

#include"foodnbeverage.hpp"
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

void showMealsMenu() {
    cout << "\n=== MEALS MENU ===\n";
    cout << "1. Chicken Rice      - RM12\n";
    cout << "2. Vegetarian Meal   - RM10\n";
    cout << "3. Kids Meal         - RM8\n";
    cout << "4. NONE \n";
}

void showDrinksMenu() {
    cout << "\n=== DRINKS MENU ===\n";
    cout << "1. Juice   - RM5\n";
    cout << "2. Tea     - RM3\n";
    cout << "3. Coffee  - RM4\n";
    cout << "4. NONE \n";
}

void showSnacksMenu() {
    cout << "\n=== SNACKS MENU ===\n";
    cout << "1. Nuts     - RM4\n";
    cout << "2. Cookies  - RM6\n";
    cout << "3. NONE \n";
}

double foodSelection() {
    int choice, qty;
    double price = 0, total = 0;

    // Meals
    showMealsMenu();
    cout << "Choose meal (1-4): ";
    cin >> choice;

    if (choice == 1) price = 12;
    else if (choice == 2) price = 10;
    else if (choice == 3) price = 8;
    else if (choice == 4) price = 0;

    cout << "Quantity: ";
    cin >> qty;
    total += price * qty;

    // Drinks
    showDrinksMenu();
    cout << "Choose drink (1-4): ";
    cin >> choice;

    if (choice == 1) price = 5;
    else if (choice == 2) price = 3;
    else if (choice == 3) price = 4;
    else if (choice == 4) price = 0;

    cout << "Quantity: ";
    cin >> qty;
    total += price * qty;

    // Snacks
    showSnacksMenu();
    cout << "Choose snack (1-3): ";
    cin >> choice;

    if (choice == 1) price = 4;
    else if (choice == 2) price = 6;
    else if (choice == 3) price = 0;

    cout << "Quantity: ";
    cin >> qty;
    total += price * qty;

    return total;
}


