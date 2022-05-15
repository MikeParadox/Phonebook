//TELEPHONE BOOK APP


#include "../includes/functions.h"
#include <iostream>

int main()
{
    std::cout << "Mike\n";

    return 0;
}

// TODO design prerequisites



// Functionality: print contacts list, add new contact, delete existing contact, 
//   modify contact, (?) merge two contacts, add information(to unused field),
//   sort contacts by several orders and save a sorting method, change the
//   soring method...

// Fields: first name, last name, mobile phone number, home phone number,
//   e-mail address, date of birth, home address, office address...
// 
// the unique data of every contact should be date and time of creation and 
//   phone number (so there can be contacts with the same first(and even with 
//   the firts and second name). If a number provided by a user for a new
//   contact is already in Contacts the programm should generate a message
//   about that.
//
// decide how to save a contact: with a struct or use enum with an std::array
// 
// use enumerations to make sorting orders function
//   
// 
// To learn: add contacts in a file and then in a database
// To learn: validate numbers, dates of birth, and e-mails by regex
// To learn: use database to keep contacts data
// To learn: use some datetime functionality to keep information about date
//   and time of creation of a contact
// 