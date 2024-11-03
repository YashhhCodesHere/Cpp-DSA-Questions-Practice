#include <bits/stdc++.h>
using namespace std;

/*
    ***Function Overloading: Functions having the same name but different parameters -> [Type of parameters, Number of parameters]
    - The return type of the functions can be the same or different.
    - The return type alone is not sufficient to differentiate between two functions.
    - The compiler differentiates between two functions based on the number of parameters, type of parameters, and sequence of parameters.
*/

int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

double add(double a, double b){
    return a+b;
}

int main()
{
    cout << add(10, 20) << endl; // 30
    cout << add(10.5, 20.5) << endl; // 31

//  Double is preferred over int as the function is overloaded with double parameters as per implicit type conversion.

    cout << add(10, 20, 30) << endl; // 60
    return 0;
}