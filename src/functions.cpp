
#include "../includes/functions.h"
#include <array>
#include <iostream>
#include <iterator>
#include <limits>


/**
 * @brief Print a list of commands and current sorting method.
 * 
 */
void getHelp()
{
    std::cout << "List of commands:\n\
        'l' to print contact list, \n\
        'm' to modify a contact, \n\
        'd' to delete a contact, \n\
        'a' to add a field to existing contact, \n\
        'q' to quit, \n";

    //Implement the functionality to display current sorting method

}


/**
 * @brief Get a command and return it to a caller.
 * 
 * @return command from a user
 */
char getACommand()
{
    std::cout << "Enter a command or 'h' for help: ";
    char input;
    std::cin >> input;

    while (std::cin.fail() || (input != 'l' && input != 'm' && input != 'd' &&
        input != 'a' && input != 'q'))
    {
        if (input == 'h')
        {
            getHelp();
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (input != 'h')
        {
            std::cout << "Invalid input. Please try again, or enter 'h' for "
            "help: ";

        }
        else
        {
            std::cout << "Enter a command: ";
        }
        std::cin >> input;
    }

    return input;
}

/**
 * @brief Print contact list.
 * Prints the list of contacts from file(and eventually from database). The
 *   list should be sorted like this: 
 *
 */
void printContactsList(std::array<int, 8> contact)
{
} // TODO learn about std::array!!!


/**
 * @brief Create a new contact and save it in a list.
 *
 * Asks a user to enter a number. Another information is optional. The unique
 *   field is time of creation, so not first or last name nor number has to be
 *   unique. User has to provide at least one phone number(mobile or other).
 *   Then contact should be added to a database.
 */
void addNewContact()
{
}


/**
 * @brief Ask user to enter contact's name and print contact from a database.
 *   Prints only non empty fields.
 *
 * Asks user to enter a first name, then asks to enter a last name or search
 *   with only the first name. Then display all the matches. For each match
 *   all the fields which are not empty should be displayed.
 */
void printContact()
{
    
}


/*
struct Contact
{
    std::string firstName;
    std::string lastName;
    std::string mobilePhoneNumber;
    std::string homePhoneNumber;
    std::string email;
    std::string homeAddress;
    std::string workAddress;
    std::string dateOfBirth;
};
*/