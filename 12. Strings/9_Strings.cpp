#include <iostream>
#include <string>
using namespace std;

/*
    str.length() -> Is a member function of string class that returns the length of the string.
    str += to_string(5); -> 'to_string' function convert int (5) to string and append it to the string.

    FOR BACKTRACKING USING STRING:-
        path = path.substr(0, path.size() - 1); -> 'substr' function is used to get the substring of the string.

    ' . ' -> Dot Operator is used to access the member functions of the class.
    
    Generally String takes 28 bytes, but it can vary depending on the compiler.
*/

int main()
{
    string str = "HELLO!";
    cout << str << "\n";
    str = "HELLO WORLD!";   // We can directly assign the value to the string.
    cout << str << "\n";

    // Input:-
    getline(cin, str);  // This will take the input till the end of the line.
    cout << str << "\n";
    
    // Printing individual characters of the strings using for loop:- (Used when we want specific index)
    for(int i = 0; i < str.length(); i++){ 
        cout << str[i] << " ";
    }
    cout << "\n";

    // Printing individual characters of the strings using for each loop:- (Used when we want to characters only)
    for(char ch: str){
        cout << ch << " ";
    }
    cout << "\n";
    return 0;
}

/*
    OOPs Basics:-
    Key terms:
    1. Class: It is an entity that have blueprint for making an object.
    2. Object: It is an instance of a class, having their own properties and methods.
    3. Member Functions: Functions defined inside the class are called member functions, & are accessed only by the object of the class.

    Syntax of string:-
    string str = "Hello World!";

    Strings in C++:-
    1. C++ Strings are the objects of pre-defined string class written in STL.
    2. Strings are used to store text, and they have useful member functions i.e., length(), capacity(), append(), insert(), etc.
    3. C++ strings are dynamic in nature, i.e., they can grow and shrink in size at runtime.
    4. C++ strings are more secure than cStrings & are contiguous in memory.
    5. Difference are "cString is a character array terminated by a null character '\0'.(Static)" whereas "C++ String is an object of string class.(Dynamic)"
    6. C++ strings supports operators like +, =, ==, !=, etc.
*/