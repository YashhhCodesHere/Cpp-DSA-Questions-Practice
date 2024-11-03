#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r){
    int nFact = factorial(n);
    int rFact = factorial(r);

    int ncr = (nFact/(rFact*factorial(n-r)));
    return ncr;
}

int npr(int n, int r){
    int nFact = factorial(n);
    int rFact = factorial(r);

    int npr = (nFact/(factorial(n-r)));
    return npr;
}

int main()
{
    int n,r;
    cout << "Enter n & r respectively: ";
    cin >> n >> r;
    
    cout << "nCr of your given input of 'n' & 'r' are: " << ncr(n, r) << "\n";
    cout << "nPr of your given input of 'n' & 'r' are: " << npr(n, r) << "\n";

    return 0;
}