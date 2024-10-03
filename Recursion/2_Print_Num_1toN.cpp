#include <bits/stdc++.h>
using namespace std;

void printNum(int n){
    if(n==0){
        return;
    }
    printNum(n-1);
    cout<<n<<" ";
}

int main()
{
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;
    printNum(num);
    return 0;
}