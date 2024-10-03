#include <bits/stdc++.h>
using namespace std;

int xToPower(int x, int n){
    if(n==1){
        return x;
    }
    return x * xToPower(x, n-1);
}

int xToPowerOptimised(int x, int n){
    if(n==1){
        return x;
    }
    if(n%2 == 0){
        return xToPowerOptimised(x, n/2) * xToPowerOptimised(x, n/2);
    }
    return x * xToPowerOptimised(x, n-1);
} 
int main()
{
    int num, power;
    cout<<"Enter the value of n & power: ";
    cin>>num>>power;
    cout<<"The value of "<< num <<" raised to the power "<< power <<" is: "<<xToPower(num, power)<<endl;
    
    cout<<"The value of "<< num <<" raised to the power "<< power <<" is: "<<xToPowerOptimised(num, power)<<endl;
    return 0;
}