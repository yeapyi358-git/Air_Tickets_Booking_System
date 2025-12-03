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
            cin.ignore(512, '\n');
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
         cout << "2. Paris" << endl;
         cout << "3. Beijing" << endl;
         cout << "4. Korea" << endl;
         cout << "5. New York" << endl;
         cout << "6. Back" << endl;
         cout << "*************************************************" << endl;
         cout << "Please enter your destination: ";
         cin >> destination;
         cout << "-------------------------------------------------\n" << endl;
    
         if (cin.fail())
        {
             cin.clear(); 
             cin.ignore(512, '\n');
        }


         if(destination < 1 || destination > 6){
            cout << "!! Invalid choice.Please only enter integer number(1-6)\n" << endl;
           
         }
         else if (destination == 6)
         {
            return;
         }
    } while(destination < 1 || destination > 6);

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
            cin.ignore(512, '\n');
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
                   cin.ignore(512, '\n');
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
            cin.ignore(512, '\n');
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
        cout << "3. Back " << endl;
        cout << "*************************************************" << endl;
        cout << "Please enter your choice: ";
        cin >> cabinclasses;
        cout << "-------------------------------------------------\n" << endl;

        if (cin.fail())
        {
            cin.clear(); 
            cin.ignore(512, '\n');
        }

        if (cabinclasses==3)
        {
            return domesticFlight();
        }
        else if (cabinclasses == 1 || cabinclasses == 2)
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
            cin.ignore(512, '\n');
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

/*Assumptions: The time and price of the flight for all date is fixed
               The price of tickets for either one way or round trip of a destination is fixed for any time
               Domestic flight only depart from Penang International Airport
               International flight only depart from Kuala Lumpur International Airport Terminal 1
               The time of flight for economy and business class is the same
               For domestic flight, one way and round trip only have TWO time slots
               For international flight, one way and round trip only have ONE time slot
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
            cout << "One-way: " << endl;
            cout << "           Time:                      Price: " << endl;
            cout << "            4:55pm -  5:30pm          MYR 79" << endl;
            cout << "           11:10am - 11:45am          MYR 79" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                      Price: " << endl;
            cout << "departure:  9:55am - 10:30am          MYR 157" << endl;
            cout << "returning:  6:55pm -  7:30pm                 " << endl;
            cout << "departure:  3:55pm -  4:30pm          MYR 157" << endl;
            cout << "returning:  9:55pm - 10:30pm                 " << endl;
        }

       else if (B==2)
       { 
            cout << "Cabin class: Business" << endl;
            cout << "One-way: " << endl;
            cout << "           Time:                      Price: " << endl;
            cout << "            4:55pm -  5:30pm          MYR 124" << endl;
            cout << "           11:10am - 11:45am          MYR 124" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                      Price: " << endl;
            cout << "departure:  9:55am - 10:30am          MYR 217" << endl;
            cout << "returning:  6:55pm -  7:30pm                 " << endl;
            cout << "departure:  3:55pm -  4:30pm          MYR 217" << endl;
            cout << "returning:  9:55pm - 10:30pm                 " << endl;
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
            cout << "           Time:                       Price: " << endl;
            cout << "            8:55pm - 10:00pm           MYR 62" << endl; 
            cout << "            6:00am -  7:05am           MYR 62" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                       Price: " << endl;
            cout << "departure: 10:55am - 12:00pm           MYR 125" << endl;
            cout << "returning:  6:55pm -  8:00pm                  " << endl;
            cout << "departure:  6:05pm -  7:10pm           MYR 125" << endl;
            cout << "returning:  9:25pm - 10:30pm                  " << endl;
       }

       else if (B==2)
       {
            cout << "Cabin class: Business" << endl;
            cout << "One-way: " << endl;
            cout << "           Time:                       Price: " << endl;
            cout << "            8:55pm - 10:00pm           MYR 399" << endl;
            cout << "            6:00am -  7:05am           MYR 399" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                       Price: " << endl;
            cout << "departure: 10:55am - 12:00pm           MYR 798" << endl;
            cout << "returning:  6:55pm -  8:00pm                  " << endl;
            cout << "departure:  6:05pm -  7:10pm           MYR 798" << endl;
            cout << "returning:  9:25pm - 10:30pm                  " << endl;
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
            cout << "One-way: " << endl;
            cout << "           Time:                       Price: " << endl;
            cout << "            8:55pm - 10:30pm           MYR 280" << endl;
            cout << "            6:00am - 10:30am           MYR 280" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                       Price: " << endl;
            cout << "departure: 10:55am -  1:45pm           MYR 484" << endl;
            cout << "returning:  6:55pm -  9:45pm                  " << endl;
            cout << "departure:  8:05pm - 10:55pm           MYR 484" << endl;
            cout << "returning:  7:40pm - 10:30pm                  " << endl;
        }

       else if (B==2)
        {
            cout << "Cabin class: Business" << endl;
            cout << "One-way: " << endl;
            cout << "           Time:                       Price: " << endl;
            cout << "            8:55pm - 10:30pm           MYR 994" << endl;
            cout << "            6:00am - 10:30am           MYR 994" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                       Price: " << endl;
            cout << "departure: 10:55am -  1:45pm           MYR 2047" << endl;
            cout << "returning:  6:55pm -  9:45pm                  " << endl;
            cout << "departure:  8:05pm - 10:55pm           MYR 2047" << endl;
            cout << "returning:  7:40pm - 10:30pm                  " << endl;
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
            cout << "One-way: " << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            11:20pm -  5:25am+1          MYR 3381" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  9:15am -  3.25pm             MYR 6043" << endl;
            cout << "returning:  10:25am -  7:30pm+1                   " << endl;
       
       }

       else if (B==2)
       {
            cout << "Cabin class: Business" << endl;
            cout << "One-way: " << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            11:20pm -  5:25am+1          MYR 9,166" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:   9:15am -  3.25pm             MYR 19057" << endl;
            cout << "returning:  10:25am -  7:30pm+1                    " << endl;
       
       
       }
       else if (B==3)
       {
            cout << "Cabin class: First Class" << endl;
            cout << "One-way: " << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            11:20pm -  5:25am+1          MYR 26324" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:   9:15am -  3.25pm             MYR 41890" << endl;
            cout << "returning:  10:25am -  7:30pm+1                    " << endl;
       
       }

       return;
    }
    
    // ---------- PARIS ----------
    if (A==2)
    {
        cout << "Depart: Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
        cout << "Destination: Paris Charles de Gaulle Airport (CDG)" << endl;

        if (B==1) {
            cout << "Cabin class: Economy" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "           10:45pm - 6:15am+1            MYR 3120" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  8:25am -  3:00pm             MYR 5890" << endl;
            cout << "returning:  9:55pm -  5:25am+1                    " << endl;
        }
        else if (B==2) {
            cout << "Cabin class: Business" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "           10:45pm - 6:15am+1            MYR 8800" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  8:25am -  3:00pm             MYR 17800" << endl;
            cout << "returning:  9:55pm -  5:25am+1                    " << endl;
        }
        else if (B==3) {
            cout << "Cabin class: First Class" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "           10:45pm - 6:15am+1            MYR 24900" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  8:25am -  3:00pm             MYR 39200" << endl;
            cout << "returning:  9:55pm -  5:25am+1                     " << endl;
        }
        return;
    }

    // ---------- BEIJING ----------
    if (A==3)
    {
        cout << "Depart: Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
        cout << "Destination: Beijing Capital International Airport (PEK)" << endl;

        if (B==1) {
            cout << "Cabin class: Economy" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            6:00pm - 12:05am+1            MYR 1500" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  9:30am -  3:10pm             MYR 2800" << endl;
            cout << "returning:  7:20pm - 12:05am+1                   " << endl;
        }
        else if (B==2) {
            cout << "Cabin class: Business" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            6:00pm - 12:05am+1           MYR 5200" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  9:30am -  3:10pm             MYR 10300" << endl;
            cout << "returning:  7:20pm - 12:05am+1                    " << endl;
        }
        else if (B==3) {
            cout << "Cabin class: First Class" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            6:00pm - 12:05am+1           MYR 14800" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  9:30am -  3:10pm             MYR 28700" << endl;
            cout << "returning:  7:20pm - 12:05am+1                     " << endl;
        }
        return;
    }

    // ---------- KOREA ----------
    if (A==4)
    {
        cout << "Depart: Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
        cout << "Destination: Seoul Incheon International Airport(ICN)" << endl;

        if (B==1) {
            cout << "Cabin class: Economy" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            1:30pm -  8:45pm             MYR 1700" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure: 10:00am -  4:50pm             MYR 3300" << endl;
            cout << "returning:  6:20pm -  1:05am+1                   " << endl;
        }
        else if (B==2) {
            cout << "Cabin class: Business" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            1:30pm -  8:45pm             MYR 6400" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure: 10:00am -  4:50pm             MYR 12600" << endl;
            cout << "returning:  6:20pm -  1:05am+1                   " << endl;
        }
        else if (B==3) {
            cout << "Cabin class: First Class" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            1:30pm -  8:45pm             MYR 18900" << endl;

            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure: 10:00am -  4:50pm             MYR 28300" << endl;
            cout << "returning:  6:20pm -  1:05am+1                     " << endl;
        }
        return;
    }

    // ---------- NEW YORK ----------
    if (A==5)
    {
        cout << "Depart: Kuala Lumpur International Airport Terminal 1 (KLIA1)" << endl;
        cout << "Destination: New York John F. Kennedy International Airport (JFK)" << endl;

        if (B==1) {
            cout << "Cabin class: Economy" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            11:55pm - 10:40am+1          MYR 4200" << endl;

            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  8:10am -  6:40pm             MYR 7900" << endl;
            cout << "returning:  9:50pm -  8:20am+1                   " << endl;
        }
        else if (B==2) {
            cout << "Cabin class: Business" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            11:55pm - 10:40am+1          MYR 13800" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  8:10am -  6:40pm             MYR 26500" << endl;
            cout << "returning:  9:50pm -  8:20am+1                   " << endl;
        }
        else if (B==3) {
            cout << "Cabin class: First Class" << endl;
            cout << "One-way:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "            11:55pm - 10:40am+1          MYR 42900" << endl;
            cout << "Round trip:" << endl;
            cout << "           Time:                         Price: " << endl;
            cout << "departure:  8:10am -  6:40pm             MYR 75900" << endl;
            cout << "returning:  9:50pm -  8:20am+1                   " << endl;
        }
        return;
    }
    //return is used to stop the function immediately after showing the selected flight details

}

