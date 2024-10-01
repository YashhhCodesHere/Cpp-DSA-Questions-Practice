#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    return a+b;
}
// Function overloading is a feature in C++ where two or more functions can have the same name but different parameters. It is a type of polymorphism.
int sum(int a, int b, int c){
    return a+b+c;
}
int main()
{
    cout<<"The sum of 3 & 6 is: "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 & 9 is: "<<sum(3,6,9)<<endl;
    return 0;
}