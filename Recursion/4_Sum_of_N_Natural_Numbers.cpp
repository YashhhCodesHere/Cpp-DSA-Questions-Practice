#include <bits/stdc++.h>
using namespace std;

int sumUptoN(int n){
    static int sum = 0;
    sum+=n;
    if(n == 0){
        return sum;
    }
    return sumUptoN(n-1);
}

int main()
{
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;
    cout<<"The sum upto " << num << " is: "<<sumUptoN(num)<<endl;
    return 0;
}