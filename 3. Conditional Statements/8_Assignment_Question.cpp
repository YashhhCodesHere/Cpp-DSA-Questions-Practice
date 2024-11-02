#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1.
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num > 0){
        cout << "(+)ve\n";
    }else if(num<0){
        cout << "(-)ve\n";
    }else{
        cout << "0\n";
    }

    // 2.
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "Leap Year!\n";
    }else{
        cout << "NOT Leap year!\n";
    }
    return 0;
}