#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    int fib = fibonacci(n-1) + fibonacci(n-2);
    return fib;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    cout << n << "th Fibonacci Number is: " << fibonacci(n) << "\n";
    
    return 0;
}