#include <bits/stdc++.h>
using namespace std;

/*
    String Member Functions:-
    1. str.length() -> Returns the length of the string.
    2. str.at(index) -> Returns the character at the given index. (Can also be accessed using str[] operator)
    3. str.substr(starting_index, length) -> Returns the substring of the string.
    4. str.find("substring") -> Returns the index of the first occurrence of the substring. (If not found then returns -1)
*/

int main()
{
    string str = "HELLO!";
    
    //1. str.length():-
    cout << "Length of the string: " << str.length() << "\n"; // This will return the length of the string.

    //2. str.at(index):-
    cout << "Character at index 1: " << str.at(1) << "\n"; // This will return the character at the given index.

    //3. str.substr(starting_index, length):-
    cout << "Substring from index 1 to 3: " << str.substr(1, 3) << "\n"; // This will return the substring of the string.

    //4. str.find("substring"):-
    cout << "Index of substring 'LO': " << str.find("LO") << "\n"; // This will return the index of the first occurrence of the substring.

    
    return 0;
}