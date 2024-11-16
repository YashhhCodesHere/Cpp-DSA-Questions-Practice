#include <bits/stdc++.h>
using namespace std;

/*
    Copy Constructor Syntax:-
    -------------------------
    class_name(const class_name &old_obj){
        // Copy all the data members of old_obj to new_obj
    }
    -----------------------------------------------------------
*/

class User{
private:
    int id;
    string password;

public:
    string username;

    User(string username){
        this->username = username;
    }

    User(User &original){
        cout << "Copying Original to New:-\n";
        username = original.username;
        id = original.id;
    }

    // Setter:-
    void setID(int id){
        this->id = id;
    }
    void setPass(string pass){
        password = pass;
    }

    // Getter:-
    int getID(){
        return id;
    }
    string getPass(){
        return password;
    }

};

int main(){
    User yash("Heyyy_Yash");
    yash.setID(117);
    yash.setPass("Yash123");

    cout << "Yash's User Id is: " << yash.getID() << "\n";
    cout << "Yash's password is: " << yash.getPass() << "\n";
    cout << "\n";

    User robinn(yash);  // Copy Constructor -> Another constructor is called to copy the data of yash to robinn by the compiler implicitly.
    cout << "Robinn's User Id is: " << robinn.getID() << "\n";
    cout << "Robinn's password is: " << robinn.getPass() << "\n";
    
    return 0;
}