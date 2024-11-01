#include <bits/stdc++.h>
#define PI 3.14     // Macro - Symbolic Constants: Doesn't occupy memory

#define ll long long  // Used to define a long long data type as 'll' for short
using namespace std;

int main()
{
    // Constants are the variables whose value can't be changed!
    // *Constants must be initialized at the time of declaration!

    ll k = 10; // k is a long long data type
    const int a = 10;
    const float pi = 3.14;
    const float g = 9.8;

    a = 20; // Throws an Error as a is a constant & can't be changed (assignment of read-only variable 'a')
    return 0;
}

// Differences between Macro & Constants:
// 1. Constants are type-specific, whereas Macros are not.
// 2. Constants are stored in memory, whereas Macros are not.
// 3. Constants are safer than Macros.
// 4. Constants are debuggable, whereas Macros are not.
// 5. Constants follow the scope rules, whereas Macros don't.