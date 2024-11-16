#include <bits/stdc++.h>
using namespace std;

/*
    Getters & Setters are the extra functions made inside class used to access the private data members of a class. 
    (Normal functions - Not Mandatory)
*/

class Boy{
    string name;
    float cgpa;
public:
    // They both below functions can be able to access the private data members of the class.
    // Setters:-
    void setName(){
        cout << "Enter the name: ";
        getline(cin, name);
        cout << "\n";
    }

    // Getters:-
    string getName(){
        cout << "Your name is: " << name << "\n";
        return name;
    }
};

int main(){
    Boy student1;
    student1.setName();
    student1.getName();
    return 0;
}