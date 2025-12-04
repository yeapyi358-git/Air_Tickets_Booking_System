//Programmer : THAM WEI XIN 24301234
//Purpose : for user to search for international and domestic flight

#include "flightsearch.hpp"
#include "mainmenu.hpp"

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void flightsearch()
{
    int choice;

    do{
        cout << "\n\t\t\t\t**************************************" << endl;
        cout << "\t\t\t\t*                                    *" << endl;
        cout << "\t\t\t\t*         Search Your Flight         *" << endl;
        cout << "\t\t\t\t*                                    *" << endl;
        cout << "\t\t\t\t**************************************" << endl;
        cout << "\n\t\t\t\tType of flight:" << endl;
        cout << "\t\t\t\t1. International flight" << endl;
        cout << "\t\t\t\t2. Domestic flight" << endl;
        cout << "\t\t\t\t3. Exit To Main Menu" << endl;
        cout << "\n\t\t\t\t**************************************" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(numeric_limits <int>::max(), '\n');
        }


        switch(choice)
        {
            case 1:
            internationalFlight();
            break;
        
            case 2:
            domesticFlight();
            break;

            case 3:
            return;
            break;
        
            default:
            cout << "\nInvalid.Please only enter integer number(1-3)\n" << endl;
            break;
        }
    }while(choice != 3); //KEEP MENU RUNNING UNTIL USER PICKS EXIT
    
}

//Assumption: The international and domestic destination is fixed

void internationalFlight()
{
    int destination;
    int cabinclasses;
    int action;
    
    do
    {
         cout << "\n\t\t\t\t**************************************" << endl;
         cout << "\t\t\t\t*                                    *" << endl;
         cout << "\t\t\t\t*      International Destination     *" << endl;
         cout << "\t\t\t\t*                                    *" << endl;
         cout << "\t\t\t\t**************************************" << endl;
         cout << "\n\t\t\t\t1. London" << endl;
         cout << "\t\t\t\t2. Beijing" << endl;
         cout << "\t\t\t\t3. New York" << endl;
         cout << "\t\t\t\t4. Back to main page" << endl;
         cout << "\n\t\t\t\t**************************************" << endl;
         cout << "Please enter your destination: ";
         cin >> destination;
    
         if (cin.fail()||destination < 1 || destination > 4)
        {
             cin.clear(); 
             cin.ignore(numeric_limits <int>::max(), '\n');
             cout << "\n!! Invalid choice.Please only enter integer number(1-6)\n" << endl;
        }

         else if (destination == 4)
         {
            return;
         }
    } while(cin.fail()||destination < 1 || destination > 4);

    bool backToCabin = true;
    while(backToCabin)
    {
        bool validCabin = false;
        while(validCabin == false)
        {
         cout << "\n\t\t\t\t**************************************" << endl;
         cout << "\t\t\t\t*                                    *" << endl;
         cout << "\t\t\t\t*            Cabin Classes           *" << endl;
         cout << "\t\t\t\t*                                    *" << endl;
         cout << "\t\t\t\t**************************************" << endl;
         cout << "\n\t\t\t\t1. Economy " << endl;
         cout << "\t\t\t\t2. Business " << endl;
         cout << "\t\t\t\t3. First Class " << endl;
         cout << "\t\t\t\t4. Back to main page" << endl;
         cout << "\n\t\t\t\t**************************************" << endl;
         cout << "Please enter your choice: ";
         cin >> cabinclasses;

         if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(numeric_limits <int>::max(), '\n');
        }
    

        if (cabinclasses==4)
        {
            return;
        }
        else if (cabinclasses == 1 || cabinclasses == 2 || cabinclasses == 3)
        {
            validCabin = true;
        }
        else
            {
                cout << "\n!! Invalid choice. Please only enter integer number(1-4)\n " << endl;
                validCabin = false;
            }
        }

            internationalFlightdetails(destination,cabinclasses);

            do
            {
               cout << endl;
               cout << "\n1.Back" << endl;
               cout << "2.Exit to Main Menu" << endl;
               cout << "Please choose:";
               cin >> action;

               if (cin.fail()|| action < 1 || action > 2)
               {
                   cin.clear(); 
                   cin.ignore(numeric_limits <int>::max(), '\n');
                   cout << "\nPlease only enter integer number(1-2)\n" << endl;
               }
                
               if (action == 1)
               {
                   backToCabin = true;
               }
               else if (action == 2)
               {
                   mainMenu();
               }
               
            }while(cin.fail()|| action < 1 || action > 2);
    }
    
}

void domesticFlight ()
{

    int destination;
    int cabinclasses;
    int action;

       do
       {
         cout << "\n\t\t\t\t**************************************" << endl;   
         cout << "\t\t\t\t*                                    *" << endl;
         cout << "\t\t\t\t*         Domestic Destination       *" << endl;
         cout << "\t\t\t\t*                                    *" << endl;
         cout << "\t\t\t\t**************************************" << endl;
         cout << "\n\t\t\t\t1. Langkawi" << endl;
         cout << "\t\t\t\t2. Kuala Lumpur" << endl;
         cout << "\t\t\t\t3. Kota Kinabalu" << endl;
         cout << "\t\t\t\t4. Back to main page" << endl;
         cout << "\n\t\t\t\t***************************************" << endl;
         cout << "Please enter your destination: ";
         cin >> destination;

         if (cin.fail()||destination < 1 || destination > 4)
        {
            cin.clear(); 
            cin.ignore(numeric_limits <int>::max(), '\n');
            cout << "\n!! Invalid choice.Please only enter integer number(1-4)\n" << endl;
        }
         else if (destination == 4)
         {
            return;
         }
         
        }while (cin.fail()||destination < 1 || destination > 4);
    
    bool backToCabin = true;
    while(backToCabin)
    {
        bool validCabin = false;
        while(validCabin == false)
        {
        //Assume domestic flight only have economy and business class seats
        cout << "\n\t\t\t\t**************************************" << endl;
        cout << "\t\t\t\t*                                    *" << endl;
        cout << "\t\t\t\t*           Cabin Classes            *" << endl;
        cout << "\t\t\t\t*                                    *" << endl;
        cout << "\t\t\t\t**************************************" << endl;
        cout << "\n\t\t\t\t1. Economy " << endl;
        cout << "\t\t\t\t2. Business " << endl;
        cout << "\t\t\t\t3. First Class " << endl;
        cout << "\t\t\t\t4. Back main page" << endl;
        cout << "\n\t\t\t\t**************************************" << endl;
        cout << "Please enter your choice: ";
        cin >> cabinclasses;

        if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(numeric_limits <int>::max(), '\n');
        }

        if (cabinclasses==4)
        {
           return;
        }
        else if (cabinclasses == 1 || cabinclasses == 2||cabinclasses == 3)
        {
            validCabin = true;
        }
        else
            {
                cout << "\n!! Invalid choice. Please only enter integer number(1-4)\n " << endl;
                validCabin = false;
            }
        }
    }

            domesticFlightdetails(destination,cabinclasses);

            do{
               cout << "\n1.Back" << endl;
               cout << "2.Exit to Main Menu" << endl;
               cout << "Please choose: ";
               cin >> action;

               if (cin.fail()||action < 1|| action >2)
               {
                cin.clear(); 
                cin.ignore(numeric_limits <int>::max(), '\n');
                cout << "\nInvalid! Please only enter integer number(1-2)\n " << endl;
               }

                else if (action == 1)
               {
                   backToCabin = true;
               }
               else if (action == 2)
               {
                   mainMenu();
               }
               }while(cin.fail()||action < 1|| action >2);
    } 

/*Assumptions: The time and price of the flight for all date and time are fixed
               Domestic flight only depart from Penang International Airport
               International flight only depart from Kuala Lumpur International Airport Terminal 1
               The time of flights for all cabin class are the same
               Each flight only have 3 time slots
               All flights are non-stop
               The flight only land at one fixed airport although the country have multiple airports
 These assumptions are for both international and domestic flights
*/

void domesticFlightdetails(int A,int B)
{
    int Price[3][3] = {
        {80, 130, 400},       // Langkawi
        {60, 300, 700},       // Kuala Lumpur
        {300, 900, 1200}      // Kota Kinabalu
    };

    string Cabin[3] = {"Economy", "Business", "First Class"};
    string Time[3][3] = {
        {" 4:55pm -  5:30pm", "11:10am - 11:45am", " 9:55am - 10:30am"}, // Langkawi
        {" 8:55pm - 10:00pm", " 6:00am -  7:05am", "10:55am - 12:00pm"}, // Kuala Lumpur
        {" 8:55pm - 10:30pm", " 6:00am - 10:30am", "10:55am -  1:45pm"}  // Kota Kinabalu
    };
    string Flights[3] = {"Langkawi", "Kuala Lumpur", "Kota Kinabalu"};

    cout << "\nDepart: Penang International Airport" << endl;
    cout << "Destination: " << Flights[A-1] << endl;
    cout << "Cabin class: " << Cabin[B-1] << endl;
    cout << "Time:                                 Prices:" << endl;

    for (int i = 0; i < 3; i++)
        cout  << Time[A-1][i] << "                 MYR " << Price[A-1][B-1] << endl;

}
    

void internationalFlightdetails(int A, int B)
{
     int Price[3][3] = {
        {3500, 9000, 26000},  // London
        {1500, 5200, 9000},   // Beijing
        {8000, 19000, 30000}  // New York
    };

    string Cabin[3] = {"Economy", "Business", "First Class"};
    string Time[3][3] = {
        {"11:20pm -  5:25am+1", " 9:15am -  3:25pm  ", "10:25am -  7:30pm+1"}, // London
        {" 6:00pm - 12:05am  ", " 9:30am -  3:10pm  ", " 7:20pm - 12:05am  "},     // Beijing
        {"11:55pm - 10:40am+1", " 8:10am -  6:40pm  ", " 9:50pm -  8:20am+1"}  // New York
    };

    string Flights[3] = {"London", "Beijing", "New York"};

    cout << "\nDepart: Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
    cout << "Destination: " << Flights[A-1] << endl;
    cout << "Cabin class: " << Cabin[B-1] << endl;
    cout << "Time:                                Prices:" << endl;

    for (int i = 0; i < 3; i++)
        cout << Time[A-1][i] << "                 MYR " << Price[A-1][B-1] << endl;
}


