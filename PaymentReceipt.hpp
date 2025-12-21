#ifndef PAYMENTRECEIPT_HPP
#define PAYMENTRECEIPT_HPP

#include <string>
using namespace std;

// data structure to store price info
struct pay_info {
    string p_name;   // passenger name
    string flight_no;
    double base_p;   // ticket price
    double lug_p;    // luggage fee
    double food_p;   // food fee
    double total;    // final total
};

// function declarations
void calc_payment(pay_info &x);
void print_ticket(pay_info x);
void save_to_txt(pay_info x);

#endif
