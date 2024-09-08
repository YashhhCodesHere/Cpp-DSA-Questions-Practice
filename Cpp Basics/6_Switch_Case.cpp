#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout << "Enter the number from 1 to 7 in order to get the days, (i.e., from Sunday to Saturday): ";
    cin >> day;

    switch(day) {       // Whatever will be the datatype of the switch, will must be the datatype of case too!
        case 1:
            cout << "Sunday!\n";
            break;
        case 2:
            cout << "Monday!\n";
            break;
        case 3:
            cout << "Tuesday!\n";
            break;
        case 4:
            cout << "Wednesday!\n";
            break;
        case 5:
            cout << "Thursday!\n";
            break;
        case 6:
            cout << "Friday!\n";
            break;
        case 7:
            cout << "Saturday!\n";
            break;
        default:
            cout << "Invalid Input!\n";
    }
    return 0;
}