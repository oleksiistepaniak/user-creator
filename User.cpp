#include "User.h"

using namespace std;

User::User(int identifier, string &first_name, string &last_name, int age, string &occupation)
{
    this->identifier = identifier;
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
    this->occupation = occupation;
}

User::~User() = default;

int User::getIdentifier() const {
    return this->identifier;
}

string User::getFirstName() {
    return this->first_name;
}

string User::getLastName() {
    return this->last_name;
}

int User::getAge() const {
    return this->age;
}

string User::getOccupation() {
    return this->occupation;
}