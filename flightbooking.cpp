//Programmer : THAM WEI XIN 24301234
//Purpose : let user book a flight and choose the destination,time, cabin class

#include "flightbooking.hpp"
#include "mainmenu.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cstdlib>//for exit

using namespace std;

void flightBooking()
{
    int destination;
    int time;
    int cabin;
    int back;
    string date;

    int Price[6][3] = {
        {3500, 9000, 26000},  // London
        {1500, 5200, 9000},   // Beijing
        {8000, 19000, 30000}, // New York
        {80, 130, 400},       // Langkawi
        {60, 300, 700},       // Kuala Lumpur
        {300, 900, 1200}      // Kota Kinabalu
    };

    // used for the file so that when store in the file, it store the exact destination,time,cabin class 
    string Cabin[3]={"Economy","Business", "First Class"};
    string Time[6][3] = {
        { "11:20pm - 5:25am+1", "9:15am - 3:25pm", "10:25am - 7:30pm+1" },   // London
        { "6:00pm - 12:05am", "9:30am - 3:10pm", "7:20pm - 12:05am" },       // Beijing
        { "11:55pm - 10:40am+1", "8:10am - 6:40pm", "9:50pm - 8:20am+1" },   // New York
        { "4:55pm - 5:30pm", "11:10am - 11:45am", "9:55am - 10:30am" },      // Langkawi
        { "8:55pm - 10:00pm", "6:00am - 7:05am", "10:55am - 12:00pm" },      // Kuala Lumpur
        { "8:55pm - 10:30pm", "6:00am - 10:30am", "10:55am - 1:45pm" }       // Kota Kinabalu
    };
    string Flights[6]={"London","Beijing","New York","Langkawi","Kuala Lumpur","Kota Kinabalu"};

    cout << "\n\t\t\t\t**************************************" << endl;
    cout << "\t\t\t\t*                                    *" << endl;
    cout << "\t\t\t\t*          BOOK YOUR FLIGHT          *" << endl;
    cout << "\t\t\t\t*                                    *" << endl;
    cout << "\t\t\t\t**************************************" << endl;

    for(int i=0;i<6;i++)
    {
       cout <<"\t\t\t\t"<<(i+1)<<". Flight to "<< Flights[i]  << endl;
    }

    cout << "\t\t\t\t7. Exit to  main menu"  << endl;
    cout << "\t\t\t\t**************************************" << endl;
    cout <<"\nPlease enter your destinatination: ";
    cin >> destination;
    if (cin.fail())
    {
        cin.clear(); 
        cin.ignore(numeric_limits <int>::max(), '\n');
    }

    switch (destination)
    {
        case 1:
        {
            do{
                cout << "\n\t\t\t\t Flight to London \n " << endl;
                cout << "\t\t\t\t1.11:20pm -  5:25am+1" << endl;
                cout << "\t\t\t\t2. 9:15am -  3:25pm " << endl;
                cout << "\t\t\t\t3.10:25am -  7:30pm+1 " << endl;
                cout << "\nPlease select the time of the flight: ";
                cin >> time;

                if (cin.fail()||time < 1 || time >3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }

            }while (cin.fail() ||time < 1||time > 3);
            
            do{
                cout << "\n\t\t\t\t\tChoose Your Cabin Class!!\n"<< endl;
                cout << "\t\t\t\t1.Economy           MYR 3500" << endl;
                cout << "\t\t\t\t2.Business          MYR 9000" << endl;
                cout << "\t\t\t\t3.First Class       MYR 26000" << endl;
                cout << "\nPlease enter your choice: ";
                cin >> cabin;

                if (cin.fail()||cabin < 1 || cabin >3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }
            }while (cin.fail() ||cabin < 1 || cabin >3);

            break;
            
        }
        
        case 2:
        {
            do{
                cout << "\n\t\t\t\t Flight to Beijing \n" << endl;
                cout << "\t\t\t\t1. 6:00pm - 12:05am " << endl;
                cout << "\t\t\t\t2. 9:30am -  3:10pm " << endl;
                cout << "\t\t\t\t3. 7:20pm - 12:05am " << endl;
                cout << "\nPlease select the time of the flight: ";
                cin >> time;

                if (cin.fail()||time < 1 || time >3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }
            }while (cin.fail() ||time < 1||time > 3);
            
            do{
                cout << "\n\t\t\t\tChoose Your Cabin Class!!\n"<< endl;
                cout << "\t\t\t\t1.Economy           MYR 1500" << endl;
                cout << "\t\t\t\t2.Business          MYR 5200" << endl;
                cout << "\t\t\t\t3.First Class       MYR 9000" << endl;
                cout << "\t\t\t\tPlease enter your choice: ";
                cin >> cabin;
                if (cin.fail()||cabin < 1 || cabin >3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }
            }while (cin.fail() ||cabin < 1 || cabin >3);

            break;
        }

        case 3:
        {
            do{
                cout << "\n\t\t\t\t Flight to New York\n " << endl;
                cout << "\t\t\t\t1.11:55pm - 10:40am+1" << endl;
                cout << "\t\t\t\t2. 8:10am -  6:40pm " << endl;
                cout << "\t\t\t\t3. 9:50pm -  8:20am+1 " << endl;
                cout << "\nPlease select the time of the flight: ";
                cin >> time;

                if (cin.fail() ||time < 1||time > 3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');;
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }
            }while (cin.fail() ||time < 1||time > 3);
            
            do{
                cout << "\n\t\t\t\tChoose Your Cabin Class!!\n"<< endl;
                cout << "\t\t\t\t1.Economy           MYR 8000" << endl;
                cout << "\t\t\t\t2.Business          MYR 19000" << endl;
                cout << "\t\t\t\t3.First Class       MYR 30000" << endl;
                cout << "\nPlease enter your choice: ";
                cin >> cabin;

                if (cin.fail()||cabin < 1 || cabin >3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');;
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }
            }while (cin.fail() ||cabin < 1 || cabin >3);

            break;
            
        }

        case 4:
        {
            do{
                cout << "\n\t\t\t\t Flight to Langkawi \n " << endl;
                cout << "\t\t\t\t1. 4:55pm -  5:30pm " << endl;
                cout << "\t\t\t\t2.11:10am - 11:45am " << endl;
                cout << "\t\t\t\t3. 9:55am - 10:30am " << endl;
                cout << "\nPlease select the time of the flight: ";
                cin >> time;

                if (cin.fail()||time < 1||time > 3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');;
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }
             }while (cin.fail() ||time < 1||time > 3);
            
            do{
                cout << "\n\t\t\t\tChoose Your Cabin Class!!\n"<< endl;
                cout << "\t\t\t\t1.Economy           MYR 80" << endl;
                cout << "\t\t\t\t2.Business          MYR 130" << endl;
                cout << "\t\t\t\t3.First Class       MYR 400" << endl;
                cout << "\nPlease enter your choice: ";
                cin >> cabin;

                if (cin.fail()||cabin < 1 || cabin >3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }
            }while (cin.fail()||cabin < 1 || cabin >3 );

            break;

        }

        case 5:
        {
             do{
                cout << "\n\t\t\t\t\t Flight to Kuala Lumpur \n " << endl;
                cout << "\t\t\t\t1. 8:55pm - 10:00pm " << endl;
                cout << "\t\t\t\t2. 6:00am -  7:05am " << endl;
                cout << "\t\t\t\t3.10:55am - 12:00pm " << endl;
                cout << "\nPlease select the time of the flight: ";
                cin >> time;

                if (cin.fail() ||time < 1||time > 3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }

            }while (cin.fail() ||time < 1||time > 3);
            
            do{
                cout << "\n\t\t\t\tChoose Your Cabin Class!!\n"<< endl;
                cout << "\t\t\t\t1.Economy           MYR 60" << endl;
                cout << "\t\t\t\t2.Business          MYR 300" << endl;
                cout << "\t\t\t\t3. First Class      MYR 700" << endl;
                cout << "\nPlease enter your choice: ";
                cin >> cabin;

                if (cin.fail()|| cabin < 1 || cabin >3)
                {
                    cin.clear(); 
                    cin.ignore(numeric_limits <int>::max(), '\n');
                    cout <<"Invalid option. Please choose only 1-3.\n";
                }

            }while (cin.fail() ||cabin < 1 || cabin >3);

            break;

        }

        case 6:
        {
            do {
                cout << "\n\t\t\t\t Flight to Kota Kinabalu \n " << endl;
                cout << "\t\t\t\t1. 8:55pm - 10:30pm " << endl;
                cout << "\t\t\t\t2. 6:00am - 10:30am " << endl;
                cout << "\t\t\t\t3.10:55am -  1:45pm " << endl;
                cout << "\nPlease select the time of the flight: ";
                cin >> time;

            if (cin.fail() || time < 1 || time > 3) {
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
                cout << "Invalid option. Please choose only 1-3.\n";
            }
            } while (time < 1 || time > 3);

            do {
                cout << "\n\t\t\t\tChoose Your Cabin Class!!\n"<< endl;
                cout << "\t\t\t\t1.Economy           MYR 300" << endl;
                cout << "\t\t\t\t2.Business          MYR 900" << endl;
                cout << "\t\t\t\t3.First Class       MYR 1200" << endl;
                cout << "\nPlease enter your choice: ";
                cin >> cabin;

            if (cin.fail() || cabin < 1 || cabin > 3) {
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
                cout << "Invalid option. Please choose only 1-3.\n";
             }
            } while (cin.fail() ||cabin < 1 || cabin > 3);
            break;
        }

        case 7:
        {
            mainMenu();
        }

        default:
        {
            cout <<"\nInvalid input.Please enter only 1-7.\n\n"<< endl;
            cout << "\nPlease enter your choice: ";
            cin >> destination;
            break;
        }
    }

    cout << "\nDate of flight(DD/MM/YYYY): ";
    cin >> date;

    information();

    ofstream file("bookingDetails.txt", ios::app);
    file << "Destination: " << Flights[destination-1] << endl;
    file << "Date: "<< date << endl;
    file << "Time Option: " << Time [destination -1] [time -1]<< endl;
    file << "Cabin: " << Cabin [cabin-1] << endl;
    file << endl;
    file.close();

    cout << "\t\t\t\tCongrats!! Your Booking is successful! Have a nice Trip!\n"<< endl;
    cout << "Booking Details: "<< endl;
    cout << "\nDestination > "<<Flights[destination-1] <<"\nDate > " << date <<"\nTime > "<< Time[destination-1][time-1] << "\nCabin Class > " << Cabin[cabin-1] << "\nPrice > MYR" << Price[destination-1][cabin-1]<< endl;
    cout << "\n\t\t\t\t1.Back To Main Menu"<< endl;
    cout << "\t\t\t\t2.Log out"<< endl;

    bool validAction = false;
    while(validAction == false)
    {
        cout << "Enter:";
        cin >> back;

        if (cin.fail()||back < 1|| back >2)
        {
            cin.clear(); 
            cin.ignore(numeric_limits <int>::max(), '\n');
            cout <<"Invalid option. Please choose only number.\n";
            validAction =false;
        }
        else if (back == 1)
        {
            validAction = true;
            mainMenu();
        }
        else if (back == 2)
        {
            validAction = true;
            cout << "\nLogging out ......" << endl;
            cout << "Successfully Logged Out!";
            exit(0);// stop the program
        }

    }

}

void information()
{
    string name;
    string gender;
    int age;

    cout << "\n\nPlease fill in your personal information" << endl;

    cout << "\nFull Name:";
    cin.ignore();
    getline(cin,name);

    cout << "Gender(Male/Female):";
    cin >> gender;
    while (gender != "Male" && gender != "Female") {
    cout << "Invalid gender. \nEnter only Male or Female: ";
    cin >> gender;
    }

    do{
    cout << "Age:";
    cin >> age;
    if (cin.fail()||age < 1 || age > 100)
    {
        cin.clear(); 
        cin.ignore(numeric_limits <int>::max(), '\n');
        cout <<"Invalid option. Please enter valid age!\n";
    }
    }while(cin.fail()||age < 1 || age > 100);
    


    cout << "\n These information are for ticket booking purpose only.\n" << endl;
    
    ofstream file("bookingDetails.txt", ios::app);
    file << "Name: " << name << endl;
    file << "Gender: " << gender << endl;
    file << "Age: " << age << endl;
    file << "-----------------------------\n";
    file.close();

}

