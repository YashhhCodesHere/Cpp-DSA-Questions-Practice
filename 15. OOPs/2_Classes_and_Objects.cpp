#include <bits/stdc++.h>
using namespace std;

/*
    Some important points about making classes:-
    - We generally create classes with the first letter of each word in uppercase, and outside the main function.
    - Classes don't require a parenthesis after the class name & must have a semicolon at the end.
    - Memory is not allocated for the class, but it is allocated for the objects of the class.
    - The class is a user-defined data type.
*/

class Student{          // By default, the access specifier of class is private!
private: // Access Specifier 
    // Properties / Attributes:- (Data Members)
    int roll_no;    // 4 bytes
    string name;    // 28 bytes
    int age;    // 4 bytes
    float cgpa = 9.5;   // 4 bytes

public:
    void getCGPA(){
        cout << "CGPA: " << (cgpa * 10) << "%\n";
    }
};

int main(){
    Student s1;    // Static Memory Allocation
    Student *s2 = new Student();    // Dynamic Memory Allocation
    cout << sizeof(s1) << endl; 
    s2 -> getCGPA();
    return 0;
}
