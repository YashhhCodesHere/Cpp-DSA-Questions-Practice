#include <bits/stdc++.h>
using namespace std;

/*
    Character is of 1 byte (8-Bits).
    It is used to store characters like 'a' - 'z', 'A' - 'Z', '0' - '9', special characters like '@', '#', '$', etc.
    We can also store some special characters like '\n', '\t', '\0', etc.
    All these characters are stored in ASCII (American Standard Code for Information Interchange) format (0-1 formats in bits).
    ASCII -> 7 bits datasets (0-127) -> 128 characters although there have to 8 bits to be configured.

    To convert the character to uppercase, we have to subtract 32 from the ASCII value.
    To convert the character to lowercase, we have to add 32 to the ASCII value.
*/

// ASCII Table: 'A' -> 65, 'a' -> 97, '0' -> 48

int main()
{
    char ch1 = 'A';
    char ch2 = 'a';
    char ch3 = '0';
    char ch4 = '@';
    char ch5 = '\n'; // Here '\n' is treated as a single character.
    char ch6 = 'f';

    // To get the position of the character in ASCII value:-
    cout << "ASCII Value of 'A': " << int(ch1) << endl;
    cout << "Position of 'f': " << ch6 - 'a' << endl;   // 5

//  To convert the character to uppercase, we have to subtract 32 from the ASCII value.
    cout << "Uppercase of 'a': " << char(ch2 - 32) << endl;   // 'A'

//  To convert the character to lowercase, we have to add 32 to the ASCII value.
    cout << "Lowercase of 'A': " << char(ch1 + 32) << endl;   // 'a'
    

    return 0;
}