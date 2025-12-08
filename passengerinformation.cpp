#include <iostream>
#include <string>
using namespace std;

void passengerInfo(string &name, string &passport, string &gender, int &age, string &nationality, string &visa) {
    cout << "\nEnter Passenger Name: ";
    getline(cin, name);

    cout << "Enter Passport Number: ";
    getline(cin, passport);

    cout << "Enter Gender (M/F): ";
    getline(cin, gender);

    cout << "Enter Age: ";
    cin >> age;
    cin.ignore(); // clear buffer

    cout << "Enter Nationality: ";
    getline(cin, nationality);

    char hasVisa;
    cout << "Do you have a visa? (Y/N): ";
    cin >> hasVisa;
    cin.ignore();

    if (hasVisa == 'Y' || hasVisa == 'y') {
        cout << "Enter Visa Number: ";
        getline(cin, visa);
    } else {
        visa = "N/A";
    }
}

int main() {
    string name, passport, gender, nationality, visa;
    int age;

    passengerInfo(name, passport, gender, age, nationality, visa);

    cout << "\n--- PASSENGER INFO ---\n";
    cout << "Name: " << name << endl;
    cout << "Passport: " << passport << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;
    cout << "Nationality: " << nationality << endl;
    cout << "Visa Number: " << visa << endl;

    return 0;
}
