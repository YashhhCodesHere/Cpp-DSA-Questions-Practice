#include <bits/stdc++.h>
using namespace std;
//  Void Function Parameterised!
void print_name(string name){
    cout << "Good Morning!\n";
    cout << "      " << name << endl; 
}
int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    print_name(name);
    return 0;
}