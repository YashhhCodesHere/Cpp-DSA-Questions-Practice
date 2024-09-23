#include <bits/stdc++.h>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
}; 
//  Union is a user-defined datatype that is used to store different datatypes in the same memory location.
//  Maximum size of a union is the size of the largest element in the union.

int main()
{
    money m1;
    m1.rice = 34;   // Only one value can be stored in a union at a time.


    // Enum is a user-defined datatype that consists of integral constants.
    // Enum is used to assign names to integral constants which makes a program easy to read and maintain.
    enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    week today;
    today = Wed;
    cout<<today;
    return 0;
}