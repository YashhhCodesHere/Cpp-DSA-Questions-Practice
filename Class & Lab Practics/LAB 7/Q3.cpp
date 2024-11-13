#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    int fib = fibonacci(n-1) + fibonacci(n-2);
    return fib;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    for(int i = n; i >= 1; i--){
        cout << i-1 << "th fibonacci is: " << fibonacci(i) << "\n";
    }

    return 0;
}