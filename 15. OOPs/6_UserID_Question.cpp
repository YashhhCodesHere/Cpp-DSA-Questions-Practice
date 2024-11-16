#include <bits/stdc++.h>
using namespace std;

// 'this' Pointer: Is mostly used when the Data Members and the Parameters have the same name, Otherwise we avoid to use it!

class User{
private:
    int id;
    string password;

public:
    string username;

    User(string username){
        this->username = username;
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

    cout << "Your User Id is: " << yash.getID() << "\n";
    cout << "Your password is: " << yash.getPass() << "\n";
    
    return 0;
}