#include <bits/stdc++.h>
using namespace std;

/*
    ->  For-each loop in C++ iterates over characters when used with a string.
        It is used when we want to access the characters of the string only.
    ->  For iterate over words (instead of characters), you need to split the string using stringstream.
        

*/

int main(){
//  1. Printing Individual Characters of the Strings using for each loop:-
    string str = "HELLO WORLD!";

    for(char ch: str){
        cout << ch << " ";
    }
    cout << "\n";

//  2. Printing Individual Words of the Strings using stringstream:- (Used when we want to print words)
    string str = "Hello World from C++";

    stringstream ss(str);
    string word;

    // Extract words from the string
    while (ss >> word) {
        cout << word << "\n";
    }

//  3. getline() allows you to specify a custom delimiter instead of just spaces
    string str = "Hello,World,from,C++";
    
    stringstream ss(str); 
    string word;

    while (getline(ss, word, ',')) { // Use ',' as the delimiter
        cout << word << "\n";
    }

    return 0;
}