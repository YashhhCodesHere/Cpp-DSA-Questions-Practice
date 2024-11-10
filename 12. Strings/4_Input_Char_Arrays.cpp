#include <bits/stdc++.h>
using namespace std;

/*
    We can take input as:-
    1. cin >> word; -> Stops reading the input when it encounters a space.
    2. cin.getline(word, 50); -> Reads the input until it encounters a newline character or the size of the array.
    3. cin.get(word, 50); -> Reads the input until it encounters a newline character or the size of the array.
    4. cin.getline(word, 50, '.'); -> Reads the input until it encounters a '.' character or the size of the array.

*/

int main()
{
//     char word[50];
// //  1. Using cin >> word;
//     cout << "Enter a word: ";
//     cin >> word;    // cin stops reading the input when it encounters a space.

//     cout << word << "\n";   // If we enter 'Hello World', then only 'Hello' will be printed.
//     cout << "The length of the word is: " << strlen(word) << "\n";   // strlen() is used to calculate the length of the string.

//  2. Using cin.getline(sentence, 50);
    char sentence[50];
    cout << "Enter a word: ";
    cin.getline(sentence, 50);

    cout << sentence << "\n";   // If we enter 'Hello World', then 'Hello World' will be printed as it is, unless size is not exceeded.
    cout << "The length of the sentence is: " << strlen(sentence) << "\n";
    return 0;
}

/*
    So, We can also use the 'getline()' function to read the input.

    Syntax of getline():-
    cin.getline(array_name, size_of_array, delimiter); -> (delimiter is optional: Used to stop reading the input when it encounters the delimiter.)
*/