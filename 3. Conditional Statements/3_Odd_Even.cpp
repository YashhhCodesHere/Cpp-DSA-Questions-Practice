#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "The number is EVEN!\n";
    }else{
        cout << "The number is ODD!\n";
    }
    
    return 0;
}