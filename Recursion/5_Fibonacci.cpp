#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int fib = fibonacci(n-1) + fibonacci(n-2);
    return fib;
}

int main()
{
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;
    cout<<"The fibonacci of " << num << " is: "<<fibonacci(num)<<endl;
    return 0;
}