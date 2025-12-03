#include "mainmenu.hpp"
#include "flightsearch.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    mainMenu();
    return 0;
}

//Programmer : THAM WEI XIN 24301234
//Purpose: The main menu of this program for user to choose what they want to do
void mainMenu()
{
    int choice;

    do
    {
    cout << "                  !!!WELCOME!!!                 " << endl;
    cout << "************************************************" << endl;
    cout << "*                   MAIN MENU                  *" << endl;
    cout << "************************************************" << endl;
    cout << "1.Search for flight" << endl;
    cout << "2.Book your flight tickets" << endl;
    cout << "3.Log out" << endl;
    cout << "************************************************" << endl;
    cout << "Please enter your choice: " ;
    cin >> choice;
    cout << "------------------------------------------------\n\n" << endl;
 
    //This is to avoid infinite loop or any error when user accidentally enter non integer
    if (cin.fail())
    {
        cin.clear(); 
        cin.ignore(512, '\n');
    }

   
    if (choice < 1|| choice > 3)
    {
        cout << "Invalid choice! Please only enter integer number(1-3)\n"<< endl;
    }
    else 
    {
        switch (choice)
       {
        case 1:
        flightsearch();
        break;

        case 2:
        cout << "Booking feature not implemented yet.\n" << endl;
        break;

        case 3:
        cout << "Logging out...\n"<< endl;
        break;

       }
    }
    
    } while (choice != 3);


}