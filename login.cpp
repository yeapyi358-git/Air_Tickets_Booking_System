#include <iostream>
#include <string>

bool authenticateUser(const std::string& username, const std::string& password) {
    // In a real application, this function would check the credentials against a database
    const std::string validUsername = "user";
    const std::string validPassword = "pass";

    return (username == validUsername && password == validPassword);
}