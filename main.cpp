#include <iostream>
#include <vector>
#include "User.h"

using namespace std;

static int IDENTIFIER = 1;

int main()
{

    vector<User> users;

    while (true)
    {
        cout << "==============================================================" << endl;
        cout << "Hello. This program imitates a work of creating users!" << endl;
        cout << "Enter 1 - if you wanna to create a user!" << endl;
        cout << "Enter 2 - if you wanna to display all created users!" << endl;
        cout << "Enter 3 - if you wanna to exit from program!" << endl;
        cout << "Any other value - program will finish its executing!" << endl;
        cout << "==============================================================" << endl;

        int operation;

        cin >> operation;

        cin.ignore();

        if (operation != 1 && operation != 2 && operation != 3)
        {
            throw runtime_error("You have chosen an invalid operation! Please, try to execute program again!");
        }

        if (operation == 1)
        {
            cout << "--------CREATING A USER----------------------------" << endl;
            cout << "Okay, you have chosen to create a user!" << endl;
            cout << "Please, enter his/her name!" << endl;

            string first_name;

            getline(cin, first_name);

            if (first_name.empty() || first_name.length() < 2)
            {
                cout << "You have entered invalid first_name! Min length is 2!" << endl;
                continue;
            }

            cout << "Okay, the first name of your user is: " << first_name << endl;

            cout << "Now please enter his/her surname!" << endl;

            string last_name;

            getline(cin, last_name);

            if (last_name.empty() || last_name.length() < 2)
            {
                cout << "You have entered invalid last_name! Min length is 2!" << endl;
                continue;
            }

            cout << "Okay, the last name of your user is: " << last_name << endl;

            cout << "Now, please enter his/her age!" << endl;

            int age;

            cin >> age;

            cin.ignore();

            cout << "Okay, the age of your user is: " << age << endl;

            cout << "Now, please enter his/her occupation!" << endl;

            string occupation;

            getline(cin, occupation);

            if (occupation.empty() || occupation.length() < 4)
            {
                cout << "You have entered invalid occupation! Min length is 4!" << endl;
                continue;
            }

            cout << "Okay, the occupation of your user is: " << occupation << endl;

            cout << "Okay, you have successfully fulfilled all needed fields!" << endl;

            User user = User(IDENTIFIER, first_name, last_name, age, occupation);
            users.push_back(user);
            IDENTIFIER++;

            cout << "User was created successfully! Enter 2 to display all users!" << endl;
            cout << "--------CREATING A USER----------------------------" << endl;
        }

        if (operation == 2)
        {
            cout << "--------ALL USERS INFO----------------------------" << endl;
            if (users.empty())
            {
                cout << "Unfortunately, there is no created users at the moment!" << endl;
            }
            for (User user : users)
            {
                cout << "**********INFO BY USER ID: " << user.getIdentifier() << "**********" << endl;
                cout << "First name: " << user.getFirstName() << endl;
                cout << "Last name: " << user.getLastName() << endl;
                cout << "Age: " << user.getAge() << endl;
                cout << "Occupation: " << user.getOccupation() << endl;
            }
            cout << "--------ALL USERS INFO----------------------------" << endl;
        }

        if (operation == 3)
        {
            cout << "Thank you for trusting our application! Have a nice day!" << endl;
            break;
        }
    }

    return 0;
}
