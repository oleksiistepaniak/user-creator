#ifndef USER_CREATOR_USER_H
#define USER_CREATOR_USER_H

#include <string>

using namespace std;


class User {
public:
    User(int identifier, string &first_name, string &last_name, int age, string &occupation);
    ~User();

    int getIdentifier() const;
    string getFirstName();
    string getLastName();
    int getAge() const;
    string getOccupation();

private:
    int identifier;
    string first_name;
    string last_name;
    int age;
    string occupation;
};


#endif //USER_CREATOR_USER_H
