#include <string>  
#include <vector>
#include <algorithm>
#include "ticket.hpp"  // Assuming ticket.h defines the Ticket structure and related functions

extern std::vector<Ticket> tickets;

void updateTicket(int ticketId, const std::string& newDestination) {
    for (auto& ticket : tickets) {
        if (ticket.id == ticketId) {
            ticket.destination = newDestination;
            break;
        }
    }
}

void cancelTicket(int ticketId) {
    tickets.erase(std::remove_if(tickets.begin(), tickets.end(),
                                 [ticketId](const Ticket& ticket) { return ticket.id == ticketId; }),
                  tickets.end());
}