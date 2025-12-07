//Programmer : NURUL AQILAH HUSNA BINTI MOHAMAD NOR HISAM 
//Purpose : let user to add on food and beverage in their ticket purchase

#include"food&beverage.hpp"
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double totalFoodPrice = FoodSelection();
    cout << "\nTotal Food & Beverage Price : RM " << totalFoodPrice << endl;

    return 0;

 
struct MenuItem {
    string name ;
    double price;
}

MenuItemMeals[4]={
    {"Chicken Rice", 10},
    {"Dry Wonton Noodles", 13},
    {"Aglio Olio Spaghetti", 15},
    {"Fish and Chips", 17}
}

MenuItemDrinks[4]={
    {"Coffee", 5},
    {"Tea", 5},
    {"Juice", 6},
    {"Plain Water", 2}
}

MenuItemSnacks[2]={
    {"Nuts", 4},
    {"Cookies", 6}
}

return 0;

}

string meals, drinks, snacks;

void MenuItemMeals (){
    cout << "\n==== MEALS MENU ====\n";
    for (int i = 0; i < 4; i++){
        cout << i+1 << ". " << meals[i].name << " - RM " << meals[i].price << endl;
    }
}

void MenuItemDrinks(){
    cout << "\n==== DRINKS MENU ====\n";
    for (int i = 0; i < 4; i++){
        cout << i+1 << ". " << drinks[i].name << drinks[i].price << endl;
    }

}

void showSnacksMenu(){
    cout << "\n==== SNACKS MENU ====" ;
    for (int i = 0; i < 4; i++){
        cout << i+1 << ". " << snacks[i].name << snacks[i].price << endl;
    } 
}

double FoodSelection(){
    int choice, qty;
    string meals, drinks , snacks;
    double total =0

    MenuItemMeals();
    cout << "Choose meal (1-4): ";
    cin >> choice;

    cout << "Quantity: ";
    cin >> qty;
    total += meals[choice-1].price * qty;

    MenuItemDrinks();
    cout << "Choose drink (1-4): ";
    cin >> choice;

    cout << "Quantity: ";
    cin >> qty;
    total += drinks[choice-1].price * qty;

    MenuItemSnacks();
    cout << "Choose snack (1-2): ";
    cin >> choice;

    cout << "Quantity: ";
    cin >> qty;
    total += snacks[choice-1].price * qty;

    return total ;

}


