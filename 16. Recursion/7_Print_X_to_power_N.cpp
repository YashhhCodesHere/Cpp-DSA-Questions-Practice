#include <bits/stdc++.h>
using namespace std;

// O(n) -> Time Complexity
int pow(int x, int n){
    if(n == 0){
        return 1;
    }

    int result = x * pow(x, n-1);
    return result;
}

// O(logn) -> Time Complexity
int power(int x, int n){
    if(n == 0){
        return 1;
    }
    int halfPower = power(x, n/2);
    int fullPower = halfPower * halfPower;

    if(n % 2 != 0){    // if n is odd
        return x * fullPower; 
    }
    return fullPower;
}

int main()
{
    int x, n;
    cout << "Enter the number & it's power: ";
    cin >> x >> n;
    
    cout << x << " raised to the power " << n << " is: " << pow(x, n) << "\n";

    cout << x << " raised to the power " << n << " is: " << power(x, n) << "\n";
    
    return 0;
}