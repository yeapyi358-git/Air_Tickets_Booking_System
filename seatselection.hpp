#ifndef SEAT_MANAGER_HPP
#define SEAT_MANAGER_HPP

#include <string>
#include <vector>
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
    Seat(string label, string type);

    string getLabel() const;
    string getClass() const;
    bool isBooked() const;
    void book();
};

// ====================
// Class SeatManager
// ====================
class SeatManager {
private:
    vector<Seat> seats;
public:
    SeatManager(); // constructor

    void displaySeats(string seatClass) const;
    string selectSeat(string seatClass);
};

#endif
