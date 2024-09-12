#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Data can be converted in two types:-
    // 1. Implicit Typecasting (Type conversion): Automatically done by the compiler(Conversion of smaller data type to larger data type)
    // 2. Explicit Typecasting: Manually done by the programmer(Conversion of larger data type to smaller data type)
    
    float num = 101.999;
    cout<<num<<endl;
    num = int(num);
    cout<<num<<endl;

    float random; // This will gonna store some garbage value
    cout<<random<<endl;
    return 0;
}