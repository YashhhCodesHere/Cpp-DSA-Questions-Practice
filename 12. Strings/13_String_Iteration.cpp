#include <bits/stdc++.h>
using namespace std;

/*
    ->  For-each loop in C++ iterates over characters when used with a string.
        It is used when we want to access the characters of the string only.
    ->  To iterate over words (instead of characters), you need to split the string using stringstream.
    ->  Regex can also be used to split the string based on a custom delimiter.
*/

int main() {
    // 1. Printing Individual Characters of the String using a for-each loop
    string str1 = "HELLO WORLD!";

    for (char ch : str1) {
        cout << ch << " ";
    }
    cout << "\n\n";

    // 2. Printing Individual Words of the String using stringstream
    string str2 = "Hello World from C++";
    stringstream ss1(str2);
    string word;

    cout << "Words from stringstream:-\n";
    while (ss1 >> word) {
        cout << word << "\n";
    }
    cout << "\n";

    // 3. Using getline() to Split the String with a Custom Delimiter
    string str3 = "Hello,World,from,C++";
    stringstream ss2(str3);

    cout << "Words split by ',' delimiter:-\n";
    while (getline(ss2, word, ',')) { // Use ',' as the delimiter
        cout << word << "\n";
    }

    return 0;
}
