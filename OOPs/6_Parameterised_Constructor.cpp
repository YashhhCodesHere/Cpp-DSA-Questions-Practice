#include <bits/stdc++.h>
using namespace std;

class Sum{
    int a, b;
public:
    Sum(int, int);  // Constructor is only initialised here!

    void getNum(){
        cout<<"The value of 'a' & 'b' is: "<< a << b <<endl;
    }

    void getSum(){
        cout<<"The sum of a & b is: "<< a+b <<endl;
    }
};

Sum :: Sum(int x, int y){   //  No return type because of Constructor
    a = x;
    b = y;
}
int main()
{
    
    return 0;
}