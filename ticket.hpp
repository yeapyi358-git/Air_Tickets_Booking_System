#include <string>
#include <vector>

struct Ticket {
    int id;
    std::string passengerName;
    std::string origin;
    std::string destination;
    std::string departureDate;
    std::string returnDate;
    double price;
};