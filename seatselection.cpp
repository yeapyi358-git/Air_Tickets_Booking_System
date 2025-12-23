#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ====================
// Class Seat
// ====================
class Seat {
private:
    string seatLabel;
    string seatClass;
    bool booked;
public:
    Seat(string label, string type) {
        seatLabel = label;
        seatClass = type;
        booked = false;
    }

    string getLabel() const { return seatLabel; }
    string getClass() const { return seatClass; }
    bool isBooked() const { return booked; }

    void book() { booked = true; }
};

// ====================
// Class SeatManager
// ====================
class SeatManager {
private:
    vector<Seat> seats;
public:
    SeatManager() {
        // First Class A–J
        for (char c = 'A'; c <= 'J'; c++) seats.push_back(Seat(string(1, c), "First Class"));
        // Business Class K–T
        for (char c = 'K'; c <= 'T'; c++) seats.push_back(Seat(string(1, c), "Business Class"));
        // Economy Class U–AX (30 seats)
        for (int i = 0; i < 30; i++) {
            string label;
            if (i < 26) label = string(1, 'U' + i);  // U–Z
            else label = "A" + string(1, 'A' + (i - 26)); // AA, AB, etc.
            seats.push_back(Seat(label, "Economy Class"));
        }
    }

    // Display only seats of selected class
    void displaySeats(string seatClass) const {
        cout << "\nAvailable " << seatClass << " Seats (O = Available, X = Booked):\n";
        int count = 0;
        for (const auto &seat : seats) {
            if (seat.getClass() == seatClass) {
                cout << seat.getLabel() << "[" << (seat.isBooked() ? "X" : "O") << "] ";
                count++;
                if (count % 10 == 0) cout << endl; // 10 seats per row
            }
        }
        cout << endl;
    }

    // Book a seat in selected class
    string selectSeat(string seatClass) {
        string choice;
        while (true) {
            displaySeats(seatClass);
            cout << "Choose your seat in " << seatClass << ": ";
            cin >> choice;

            bool found = false;
            for (auto &seat : seats) {
                if (seat.getLabel() == choice && seat.getClass() == seatClass) {
                    found = true;
                    if (seat.isBooked()) {
                        cout << "Seat already booked! Choose another.\n";
                    } else {
                        seat.book();
                        cout << "You selected " << seatClass 
                             << " seat: " << seat.getLabel() << endl;
                        return seat.getLabel();
                    }
                    break;
                }
            }

            if (!found) cout << "Invalid seat! Try again.\n";
        }
    }
};

// ====================
// MAIN
// ====================
int main() {
    SeatManager manager;
    char another;

    cout << "=== AIR SEAT BOOKING SYSTEM ===\n";

    do {
        cout << "\nSelect Seat Class:\n";
        cout << "1. First Class\n";
        cout << "2. Business Class\n";
        cout << "3. Economy Class\n";
        cout << "Enter choice (1-3): ";

        int classChoice;
        cin >> classChoice;
        cin.ignore(); // clear buffer

        string seatClass;
        if (classChoice == 1) seatClass = "First Class";
        else if (classChoice == 2) seatClass = "Business Class";
        else if (classChoice == 3) seatClass = "Economy Class";
        else {
            cout << "Invalid class choice! Try again.\n";
            continue;
        }

        manager.selectSeat(seatClass);

        cout << "Do you want to book another seat? (Y/N): ";
        cin >> another;
        cin.ignore();
    } while (another == 'Y' || another == 'y');

    cout << "\n--- FINAL SEAT LAYOUT ---\n";
    cout << "First Class:\n"; manager.displaySeats("First Class");
    cout << "Business Class:\n"; manager.displaySeats("Business Class");
    cout << "Economy Class:\n"; manager.displaySeats("Economy Class");

    return 0;
}
