
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iterator>
#include <limits>

void getHelp();
char getACommand();

/*
struct Contact
{
    std::string firstName;
    std::string lastName;
    std::string mobilePhoneNumber;
    std::string homePhoneNumber;
    std::string emailAddress;
    std::string homeAddress;
    std::string workAddress;
    std::string dateOfBirth;
};
*/

enum class ContactListDataFieldNumbers
{
    firstName,
    lastName,
    mobilePhoneNumber,
    homePhoneNumber,
    emailAddress,
    homeAddress,
    workAddress,
    dateOfBirth,
};


#endif
