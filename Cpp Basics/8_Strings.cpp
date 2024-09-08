#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";   //  String also stores every individual characters in terms of indexes... 
    cout << s[3] << endl;   // 3rd index element of the string will be shown as output!
    cout << s[s.length() - 1] << "\n";  // Last index
    int len = s.size();
    s[len-1] = 'D';     // Modifying elements of arrays!
    cout << s[s.length() - 1];
    return 0;
}