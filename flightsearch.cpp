//Programmer : THAM WEI XIN 24301234
//Purpose : for user to search for international and domestic flight

#include "flightsearch.hpp"
#include "mainmenu.hpp"

#include <iostream>
#include <string>

using namespace std;

void flightsearch()
{
    int choice;

    do{
        cout << "************************************************" << endl;
        cout << "*              Search Your Flight              *" << endl;
        cout << "************************************************" << endl;
        cout << "Type of flight:" << endl;
        cout << "1. International flight" << endl;
        cout << "2. Domestic flight" << endl;
        cout << "3. Exit To Main Menu" << endl;
        cout << "**************************************" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        cout << "-------------------------------------------------\n" << endl;

        if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(500, '\n');
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
            cout << "Invalid.Please only enter integer number(1-3)\n" << endl;
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
         cout << "*************************************************" << endl;
         cout << "*           International Destination           *" << endl;
         cout << "*************************************************" << endl;
         cout << "1. London" << endl;
         cout << "2. Beijing" << endl;
         cout << "3. New York" << endl;
         cout << "4. Back" << endl;
         cout << "*************************************************" << endl;
         cout << "Please enter your destination: ";
         cin >> destination;
         cout << "-------------------------------------------------\n" << endl;
    
         if (cin.fail())
        {
             cin.clear(); 
             cin.ignore(500, '\n');
        }


         if(destination < 1 || destination > 4){
            cout << "!! Invalid choice.Please only enter integer number(1-6)\n" << endl;
           
         }
         else if (destination == 4)
         {
            return;
         }
    } while(destination < 1 || destination > 4);

    bool backToCabin = true;
    while(backToCabin)
    {
        bool validCabin = false;
        while(validCabin == false)
        {
         cout << "*************************************************" << endl;
         cout << "*                Cabin Classes                  *" << endl;
         cout << "*************************************************" << endl;
         cout << "1. Economy " << endl;
         cout << "2. Business " << endl;
         cout << "3. First Class " << endl;
         cout << "4. Back" << endl;
         cout << "*************************************************" << endl;
         cout << "Please enter your choice: ";
         cin >> cabinclasses;
         cout << "-------------------------------------------------\n" << endl;
         if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(500, '\n');
        }
    

        if (cabinclasses==4)
        {
            return internationalFlight (); // go back to destination menu
        }
        else if (cabinclasses == 1 || cabinclasses == 2 || cabinclasses == 3)
        {
            validCabin = true;
        }
        else
            {
                cout << "!! Invalid choice. Please only enter integer number(1-4)\n " << endl;
            }
        }

            internationalFlightdetails(destination,cabinclasses);

            do
            {
               cout << endl;
               cout << "1.Back" << endl;
               cout << "2.Exit to Main Menu" << endl;
               cout << "Please choose:";
               cin >> action;

               if (cin.fail())
               {
                   cin.clear(); 
                   cin.ignore(500, '\n');
                   cout << "Please only enter integer number(1-2)\n" << endl;
               }
                
               if (action == 1)
               {
                   backToCabin = true;
               }
               else if (action == 2)
               {
                   mainMenu();
               }
               
            }while(action < 1|| action >2);
    }
    
}

void domesticFlight ()
{

    int destination;
    int cabinclasses;
    int action;

   do
    {
         cout << "*************************************************" << endl;
         cout << "*             Domestic Destination              *" << endl;
         cout << "*************************************************" << endl;
         cout << "1. Langkawi" << endl;
         cout << "2. Kuala Lumpur" << endl;
         cout << "3. Kota Kinabalu" << endl;
         cout << "4. Back" << endl;
         cout << "*************************************************" << endl;
         cout << "Please enter your destination: ";
         cin >> destination;
         cout << "-------------------------------------------------\n" << endl;

         if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(500, '\n');
        }

         if(destination < 1 || destination > 4)
         {
            cout << "!! Invalid choice.Please only enter integer number(1-4)\n" << endl;
         }
         else if (destination == 4)
         {
            return;
         }
        }while (destination < 1 || destination > 4);
    
    bool backToCabin = true;
    while(backToCabin)
    {
        bool validCabin = false;
        while(validCabin == false)
        {
        //Assume domestic flight only have economy and business class seats
        cout << "*************************************************" << endl;
        cout << "*                Cabin Classes                  *" << endl;
        cout << "*************************************************" << endl;
        cout << "1. Economy " << endl;
        cout << "2. Business " << endl;
        cout << "3. First Class " << endl;
        cout << "4. Back " << endl;
        cout << "*************************************************" << endl;
        cout << "Please enter your choice: ";
        cin >> cabinclasses;
        cout << "-------------------------------------------------\n" << endl;

        if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(500, '\n');
        }

        if (cabinclasses==3)
        {
            return domesticFlight();
        }
        else if (cabinclasses == 1 || cabinclasses == 2||cabinclasses == 3)
        {
            validCabin = true;
        }
        else
            {
                cout << "!! Invalid choice. Please only enter integer number(1-3)\n " << endl;
            }
        }

            domesticFlightdetails(destination,cabinclasses);

            do
            {
               cout << endl;
               cout << "1.Back" << endl;
               cout << "2.Exit to Main Menu" << endl;
               cout << "Please choose:";
               cin >> action;
               cout <<" _________________________________________\n";

               if (cin.fail())
              {
                 cin.clear(); 
                 cin.ignore(500, '\n');
              }

               
               if (action == 1)
               {
                   backToCabin = true;
               }
               else if (action == 2)
               {
                   mainMenu();
               }
               else
               {
               cout << "Invalid! Please only enter integer number(1-2)\n " << endl;
               }

            }while(action < 1|| action >2);
    }
        
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
    // ---------- LANGKAWI ----------
    if (A==1)
    {   
       cout << "Depart:Penang International Airport" << endl;
       cout << "Destination: Langkawi International Airport" << endl;

       if (B==1)
       {
            cout << "Cabin class: Economy" << endl;
            cout << "Time:                      Price: " << endl;
            cout << " 4:55pm -  5:30pm          MYR 80" << endl;
            cout << "11:10am - 11:45am          MYR 80" << endl;
            cout << " 9:55am - 10:30am          MYR 80" << endl;
            
        }

       else if (B==2)
       { 
            cout << "Cabin class: Business" << endl;
            cout << "Time:                      Price: " << endl;
            cout << " 4:55pm -  5:30pm          MYR 80" << endl;
            cout << "11:10am - 11:45am          MYR 80" << endl;
            cout << " 9:55am - 10:30am          MYR 80" << endl;
       }
    
       else if (B==3)
       {
            cout << "Cabin class: First Class" << endl;
            cout << "Time:                      Price: " << endl;
            cout << " 4:55pm -  5:30pm          MYR 400" << endl;
            cout << "11:10am - 11:45am          MYR 400" << endl;
            cout << " 9:55am - 10:30am          MYR 400" << endl;
       }

       return;
    }
    
    // ---------- KUALA LUMPUR ----------
    if (A==2)
    {
        cout << "Depart:Penang International Airport" << endl;
        cout << "Destination: Kuala Lumpur International Airport Terminal 1" << endl;

        if (B==1)
       {
            cout << "Cabin class: Economy" << endl;
            cout << "Time:                       Price: " << endl;
            cout << " 8:55pm - 10:00pm           MYR 60" << endl; 
            cout << " 6:00am -  7:05am           MYR 60" << endl;
            cout << "10:55am - 12:00pm           MYR 60" << endl;
            
       }

       else if (B==2)
       {
            cout << "Cabin class: Business" << endl;
            cout << "Time:                       Price: " << endl;
            cout << " 8:55pm - 10:00pm           MYR 300" << endl; 
            cout << " 6:00am -  7:05am           MYR 300" << endl;
            cout << "10:55am - 12:00pm           MYR 300" << endl;
       }
        
         else if (B==3)
       {
            cout << "Cabin class: First Class" << endl;
            cout << "Time:                       Price: " << endl;
            cout << " 8:55pm - 10:00pm           MYR 700" << endl; 
            cout << " 6:00am -  7:05am           MYR 700" << endl;
            cout << "10:55am - 12:00pm           MYR 700" << endl;
       }

       return;
    }

    // ---------- KOTA KINABALU ----------
    if (A==3)
    {
        cout << "Depart:Penang International Airport" << endl;
        cout << "Destination: Kota Kinabalu International Airport" << endl;

        if (B==1)
        {
            cout << "Cabin class: Economy" << endl;
            cout << "Time:                       Price: " << endl;
            cout << " 8:55pm - 10:30pm           MYR 300" << endl;
            cout << " 6:00am - 10:30am           MYR 300" << endl;
            cout << "10:55am -  1:45pm           MYR 300" << endl;
        }

       else if (B==2)
        {
            cout << "Cabin class: Business" << endl;
            cout << "Time:                       Price: " << endl;
            cout << " 8:55pm - 10:30pm           MYR 900" << endl;
            cout << " 6:00am - 10:30am           MYR 900" << endl;
            cout << "10:55am -  1:45pm           MYR 900" << endl;
        }

        else if (B==3)
        {
            cout << "Cabin class: Business" << endl;
            cout << "Time:                       Price: " << endl;
            cout << " 8:55pm - 10:30pm           MYR 1200" << endl;
            cout << " 6:00am - 10:30am           MYR 1200" << endl;
            cout << "10:55am -  1:45pm           MYR 1200" << endl;
        }

        return;
    } 
}

void internationalFlightdetails(int A, int B)
{
    // ---------- LONDON ----------
    if (A==1)
    {
       cout << "Depart:Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
       cout << "Destination: London City Airport (LCN)" << endl;

       if (B==1)
       {   
            cout << "Cabin class: Economy" << endl;
            cout << " Time:                         Price: " << endl;
            cout << " 11:20pm -  5:25am+1          MYR 3500" << endl;
            cout << "  9:15am -  3.25pm            MYR 3500" << endl;
            cout << " 10:25am -  7:30pm+1          MYR 3500" << endl;
       
       }

       else if (B==2)
       {
            cout << "Cabin class: Business" << endl;
           cout << "Cabin class: Economy" << endl;
            cout << " Time:                         Price: " << endl;
            cout << " 11:20pm -  5:25am+1          MYR 9000" << endl;
            cout << "  9:15am -  3.25pm            MYR 9000" << endl;
            cout << " 10:25am -  7:30pm+1          MYR 9000" << endl;
       
       
       }
       else if (B==3)
       {
            cout << "Cabin class: First Class" << endl;
            cout << "Cabin class: Economy" << endl;
            cout << " Time:                         Price: " << endl;
            cout << " 11:20pm -  5:25am+1          MYR 26000" << endl;
            cout << "  9:15am -  3.25pm            MYR 26000" << endl;
            cout << " 10:25am -  7:30pm+1          MYR 26000" << endl;
       }

       return;
    }

    // ---------- BEIJING ----------
    if (A==2)
    {
        cout << "Depart: Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
        cout << "Destination: Beijing Capital International Airport (PEK)" << endl;

        if (B==1) {
            cout << "Cabin class: Economy" << endl;
            cout << "Time:                         Price: " << endl;
            cout << " 6:00pm - 12:05am            MYR 1500" << endl;
            cout << " 9:30am -  3:10pm            MYR 1500" << endl;
            cout << " 7:20pm - 12:05am            MYR 1500" << endl;
        }
        else if (B==2) {
            cout << "Cabin class: Business" << endl;
             cout << "Time:                         Price: " << endl;
            cout << " 6:00pm - 12:05am            MYR 5200" << endl;
            cout << " 9:30am -  3:10pm            MYR 5200" << endl;
            cout << " 7:20pm - 12:05am            MYR 5200" << endl;
        }
        else if (B==3) {
            cout << "Cabin class: First Class" << endl;
            cout << "Time:                         Price: " << endl;
            cout << " 6:00pm - 12:05am            MYR 9000" << endl;
            cout << " 9:30am -  3:10pm            MYR 9000" << endl;
            cout << " 7:20pm - 12:05am            MYR 9000" << endl;
        }
        return;
    }

    
    // ---------- NEW YORK ----------
    if (A==3)
    {
        cout << "Depart: Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
        cout << "Destination: New York John F. Kennedy International Airport (JFK)" << endl;

        if (B==1) {
            cout << "Cabin class: Economy" << endl;
            cout << " Time:                        Price: " << endl;
            cout << " 11:55pm - 10:40am+1          MYR 8000" << endl;
            cout << "  8:10am -  6:40pm            MYR 8000" << endl;
            cout << "  9:50pm -  8:20am+1          MYR 8000" << endl;
        }
        else if (B==2) {
            cout << "Cabin class: Business" << endl;
            cout << " Time:                        Price: " << endl;
            cout << " 11:55pm - 10:40am+1          MYR 19000" << endl;
            cout << "  8:10am -  6:40pm            MYR 19000" << endl;
            cout << "  9:50pm -  8:20am+1          MYR 19000" << endl;
        }
        else if (B==3) {
            cout << "Cabin class: First Class" << endl;
cout << " Time:                        Price: " << endl;
            cout << " 11:55pm - 10:40am+1          MYR 30000" << endl;
            cout << "  8:10am -  6:40pm            MYR 30000" << endl;
            cout << "  9:50pm -  8:20am+1          MYR 30000" << endl;
        }
        return;
    }
    //return is used to stop the function immediately after showing the selected flight details

}

