#include "mainmenu.hpp"
#include "flightsearch.hpp"
#include "flightbooking.hpp"


#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

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
    cout << "\t\t\t\t ____________________________________" << endl;
    cout << "\t\t\t\t|                                    |" << endl;
    cout << "\t\t\t\t|            !!!WELCOME!!!           |" << endl;
    cout << "\t\t\t\t|                  TO                |" << endl;
    cout << "\t\t\t\t|         ***ROYAL AIRLINES***       |" << endl;
    cout << "\t\t\t\t|____________________________________|" << endl;
    cout << "\n\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t*                                    *" << endl;
    cout << "\t\t\t\t*              MAIN MENU             *" << endl;
    cout << "\t\t\t\t*                                    *" << endl;
    cout << "\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t|                                    |" << endl;
    cout << "\t\t\t\t|       1.Search for flight          |" << endl;
    cout << "\t\t\t\t|       2.Book your flight tickets   |" << endl;
    cout << "\t\t\t\t|       3.Log out                    |" << endl;
    cout << "\t\t\t\t|                                    |" << endl;
    cout << "\t\t\t\t**************************************" << endl;
    cout << "Please enter your choice: " ;
    cin >> choice;
 
    //This is to avoid infinite loop or any error when user accidentally enter non integer
    if (cin.fail())
    {
        cin.clear(); 
        cin.ignore(numeric_limits <int>::max(), '\n');
    }

   
    if (choice < 1|| choice > 3)
    {
        cout << "\nInvalid choice! Please only enter integer number(1-3)\n"<< endl;
    }
    else 
    {
        switch (choice)
       {
        case 1:
        flightsearch();
        break;

        case 2:
        flightBooking();
        break;

        case 3:
        cout << "Logging out..."<< endl;
        cout << "Successfully Logged Out\n";
        exit(0);
        break;

       }
    }
    
    } while (choice != 3);


}