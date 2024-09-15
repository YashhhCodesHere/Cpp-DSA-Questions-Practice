#include <bits/stdc++.h>
using namespace std;
int main()
{
    // There are various datatypes:-
    int a = 5;
    long b = 152;
    long long c = 132515;
    float d = 1.4;
    double e = 13.13445;
    double f = 123.4124515445;

    string g = "Hello";     // Double Quotes is used for String!
    char h = 'b';   // Single Quotes is used for characters!

    // String takes too much place that's why we use char to store single character!

    // Taking string as input:-
    string inp;
    cout << "Enter your string here: ";
    cin >> inp; // This method will read a string from the user and store it in the variable 'inp' but takes only one word or only till space
    getline(cin, inp); // This method will read a line of text from the user and store it in the variable 'inp'
    cout << inp;

    // Size of datatype modifiers:-

    cout<<sizeof(int)<<" Bytes\n";
    cout<<sizeof(long int)<<" Bytes\n";
    cout<<sizeof(short int)<<" Bytes\n";

    return 0;
}




/*
    // Boolean datatype:-
    bool h = true;

    // Character datatype:-
    char i = 'A';

    // Unsigned integer datatypes:-
    unsigned int j = 10;
    unsigned long k = 100;
    unsigned long long l = 1000;

    // Short integer datatypes:-
    short m = 20;
    unsigned short n = 30;

    // Signed integer datatypes:-
    signed int o = -10;
    signed long p = -100;
    signed long long q = -1000;

    // Wide character datatype:-
    wchar_t r = L'X';

    // Size-specific integer datatypes:-
    int8_t s = 1;
    uint8_t t = 2;
    int16_t u = 3;
    uint16_t v = 4;
    int32_t w = 5;
    uint32_t x = 6;
    int64_t y = 7;
    uint64_t z = 8;
*/