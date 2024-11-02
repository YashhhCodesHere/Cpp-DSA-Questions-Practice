#include <bits/stdc++.h>
using namespace std;

/*
    // Switch Case:-
    - It is a control statement that allows us to choose only one choice among the many given choices.
    - Used when we have multiple options to choose from.
    - It is a multi-way branch statement.    
*/

int main()
{
    int day;
    cout << "Enter the day of the week in numbers(From 1 - 7): ";
    cin >> day;

    switch(day){
        case 1:
            cout << "It's Monday!\n";
            break;
        case 2:
            cout << "It's Tuesday!\n";
            break;
        case 3:
            cout << "It's Wednesday!\n";
            break;
        case 4:
            cout << "It's Thursday!\n";
            break;
        case 5:
            cout << "It's Friday!\n";
            break;
        case 6:
            cout << "It's Saturday!\n";
            break;
        case 7:
            cout << "It's Sunday!\n";
            break;
        default:
            cout << "Enter day between 1 to 7!\n";
    }
    return 0;
}


/*
    Syntax:-
    switch(expression){
        case constant1:
            // code to be executed if expression is equal to constant1
            break;
        case constant2:
            // code to be executed if expression is equal to constant2
            break;
        case constant3:
            // code to be executed if expression is equal to constant3
            break;
        ...
        ...
        default:
            // code to be executed if expression doesn't match any of the cases
    }
*/