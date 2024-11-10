#include <bits/stdc++.h>
using namespace std;

/*
    Character arrays are generally works as normal integer arrays, are written in single-quotes
    But, when we output char array name-> it will print the whole string. We use character arrays to store strings.

    Strings are nothing but a collection of characters, & are written in double-quotes.
    Strings can be of any size & can store blank spaces too.

    Strings are always terminated by a NULL character '\0' (ASCII value 0), which is used to indicate the end of the string.
*/

int main(){
    char arr[5] = {'A', 'B', 'C', 'D', 'E'}; // Character Array
    char str[5] = {'C' , 'O', 'D', 'E', '\0'}; // String -> Must be terminated by '\0': Total size = n+1
    cout << arr << "\n";    // ABCDE 

    cout << arr[0] << "\n";    // A
    cout << arr[1] << "\n";    // B
    cout << arr[2] << "\n";    // C
    cout << arr[3] << "\n";    // D
    cout << arr[4] << "\n";    // E

    return 0;
}

/*
    Values of character array can be changed, but values of string literals cannot be changed:-
    char arr[5] = {'C', 'O', 'D', 'E', '\0'}; -> Character Array => Must be terminated by '\0'
    char arr[5] = "CODE"; -> String Literal => Automatically terminated by '\0'
*/