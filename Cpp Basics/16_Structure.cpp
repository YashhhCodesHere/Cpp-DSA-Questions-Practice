#include <bits/stdc++.h>
using namespace std;
// Structure is a user-defined datatype that is used to store a group of items of different datatypes.
struct Employee
{
    int id;
    string name;
    float salary;
};

// Typedef is used to give a new name to an existing datatype.

typedef struct Student
{
    int id;
    string name;
    float salary;
} st;

int main()
{
    Employee e1;
    e1.id = 101;
    e1.name = "Yash";
    e1.salary = 600000;
    cout << "Salary of Yash: " << e1.salary << endl;

    st s1;  // Using typedef
    s1.id = 102;
    s1.name = "Harsh";
    s1.salary = 500000;
    return 0;
}