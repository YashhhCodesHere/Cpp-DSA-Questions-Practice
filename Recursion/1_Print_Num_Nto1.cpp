#include <bits/stdc++.h>
using namespace std;

void printNum(int n){
    if(n<1){
        return;
    }
    cout<<n<<" ";
    printNum(n-1);
}

int main()
{
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;
    printNum(num);
    return 0;
}