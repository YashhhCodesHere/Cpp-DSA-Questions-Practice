#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, string source, string helper, string destination){
    if(n==1){
    cout<<"Transferring disk "<< n << " from " << source << " to " << destination;
    return;
    }
    towerOfHanoi(n-1, source, destination, helper);
    cout<<"Transferring disk "<< n << " from " << source << " to " << destination;

    towerOfHanoi(n-1, helper, source, destination);
}

int main()
{
    int disks;
    cout<<"Enter the number of disks: ";
    cin>>disks;
    towerOfHanoi(disks,"S","H","D");
    return 0;
}