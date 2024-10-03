#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<1){
        return 1; 
    }
    return n * factorial(n-1);
}

int main()
{
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;
    cout << "The factorial of "<< num <<" is: "<<factorial(num)<<endl;
    return 0;
}