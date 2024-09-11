#include <bits/stdc++.h>
using namespace std;
int pass_by_value(int a){
    a += 10;
    return a;   // This will gonna make a copy of 'a' and return with adding 10 to it!
}
int pass_by_reference(int &a){
    a += 10;
    return a;   // This will take the original address of 'a' and add 10 to it!
}
int main()
{
    int a = 5;
    
    cout << pass_by_value(a) << endl;
    cout << a << "\n";  // Original value of 'a' will remains same!
    cout << pass_by_reference(a) << endl;
    cout << a << "\n";
    return 0;
}