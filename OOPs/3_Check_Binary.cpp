#include <bits/stdc++.h>
using namespace std;

// Members of a class are private by default.

class Binary
{
    string s;

public:
    void read();
    void check();
};
void Binary::read()
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void Binary::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format!" << endl;
            return;
        }
    }
    cout << "Correct Binary Format!" << endl;
}
int main()
{
    Binary b; // Object
    b.read();
    b.check();

    return 0;
}