#include <bits/stdc++.h>
using namespace std;

/*
    Access Specifiers:-
    - They are used to set the accessibility of the data members and member functions of a class.
    - There are 3 types of Access Specifiers:-
        1. Private -> Data & Methods accessible only within the class, or with it's Friends(Friend Functions).
        2. Protected(Inheritance) -> Data & Methods accessible within the class and to it's derived classes(Inherited Classes).
        3. Public -> Data & Methods accessible from to everyone from anywhere.

    - By default, the access specifier of a class is private.
    - However, We can change the access specifier of a class.


*/

class User{
private:
    int id;
    string username;
    string password;
    string bio = "I'm Yash Here!\n";
public:
    void deactivate(){
        cout << "Deactivating your account!\n";
    }

    void showBio(){
        cout << bio;
    }

    void editBio(){
        cout << "Enter your new Bio: ";
        cin >> bio;
        getline(cin, bio);
    }
};

int main(){
    User Yash;
    Yash.showBio();
    Yash.editBio();

    return 0;
}