#include <bits/stdc++.h>
using namespace std;

class Sum{
    int a, b;
public:
    Sum(int = 6, int y=8);  // Constructor is only initialised here!

    void getNum(){
        cout<<"The value of 'a' & 'b' is: "<< a <<" "<< b <<endl;
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
    Sum s1(5,3);   // Used parameter passed
    s1.getNum();
    s1.getSum();
    
    Sum s2;   // Used default value inside the constructor
    s2.getNum();
    s2.getSum();
    
    return 0;
}