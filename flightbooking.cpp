#include "flightbooking.hpp"

#include <iostream>
#include <string>

using namespace std;

void flightBooking()
{
    cout << "************************************************" << endl;
    cout << "*               Book Your Flight               *" << endl;
    cout << "************************************************" << endl;
    flightSelection();
}

void flightSelection()
{
    int choice;

    do
    {
    cout << "1. International" << endl;
    cout << "2. Domestic" << endl;
    cout << "Please enter your choice: " << endl;
    cin >> choice;
    if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(512, '\n');
        }

    else
    {
        if (choice == 1)
        {
           destinationChoice1();
        }
        else if (choice == 2)
        {
            destinationChoice2();
        }
    }
    } while(choice < 1|| choice > 2);

}

void destinationChoice1()
{
    int destination;

     cout << "1. London" << endl;
     cout << "2. Paris" << endl;
     cout << "3. Beijing" << endl;
     cout << "4. Korea" << endl;
     cout << "5. New York" << endl;
     cout << "6. Back" << endl;
     cout << "Please enter your destination: ";
     cin >> destination;
     
     
     if (cin.fail())
    {
         cin.clear(); 
         cin.ignore(512, '\n');
    }
}

void destinationChoice2()
{
    int destination;

     cout << "1. Langkawi" << endl;
     cout << "2. Kuala Lumpur" << endl;
     cout << "3. Kota Kinabalu" << endl;
     cout << "4. Back" << endl;
     cout << "Please enter your destination: ";
     cin >> destination;

     if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(512, '\n');
        }


}

void cabinChoice1()
{
    int cabin;

    cout << "1.Economy" << endl;
    cout <<"2.Buisness" << endl;
    cout <<"3.First Class" << endl;
    cout << "Please enter your choice";
    cin >> cabin;

}

void cabinChoice2()
{
    int cabin;

    cout << "1.Economy" << endl;
    cout << "2.Buisness" << endl;
    cout << "Please enter your choice";
    cin >> cabin;

}