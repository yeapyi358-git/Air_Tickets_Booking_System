#include "PaymentReceipt.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Programmer: [Your Name]
// Purpose: Calculate the final payment amount with tax
void calc_payment(pay_info &x) {
    double tax = 0.06; // 6% tax
    double sum = x.base_p + x.lug_p + x.food_p;
    x.total = sum + (sum * tax);
    cout << "\n>>> Payment calculation done." << endl;
}

// Programmer: [Your Name]
// Purpose: Display the receipt on the terminal screen
void print_ticket(pay_info x) {
    cout << "\n********************************" << endl;
    cout << "        FLIGHT RECEIPT         " << endl;
    cout << "********************************" << endl;
    cout << "Name: " << x.p_name << endl;
    cout << "Flight: " << x.flight_no << endl;
    cout << "--------------------------------" << endl;
    cout << "Ticket Price : RM " << x.base_p << endl;
    cout << "Luggage Fee  : RM " << x.lug_p << endl;
    cout << "Food Fee     : RM " << x.food_p << endl;
    cout << "Total (w/Tax): RM " << fixed << setprecision(2) << x.total << endl;
    cout << "********************************" << endl;
}

// Programmer: [Your Name]
// Purpose: Save the receipt data into a text file
void save_to_txt(pay_info x) {
    // create a file named by passenger name
    string fname = x.p_name + "_receipt.txt";
    ofstream myfile(fname);
    
    if (myfile.is_open()) {
        myfile << "Passenger: " << x.p_name << endl;
        myfile << "Flight Number: " << x.flight_no << endl;
        myfile << "Total Amount Paid: RM " << x.total << endl;
        myfile.close();
        cout << ">>> Receipt saved to " << fname << endl;
    } else {
        cout << ">>> Error: cannot save file!" << endl;
    }
}
