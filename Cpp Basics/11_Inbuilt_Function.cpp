#include <bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num == 1){
        return 1;
    }
    return num * fact(num-1);
}
int main()
{
    int num1 = 23, num2 = 14;
    int maximum = max(num1, num2);  // Shows maximum of two inputs!
    cout << "Maximum of both number is: " << maximum;

    // Calculating nCr:-

    int n, r;
    cout<< "Enter the n & r respectively: ";
    cin>>n>>r;
    if(n<r){
        cout<<"Invalid input!";
    }else{
        int nfact = fact(n), rfact = fact(r), nMrfact = fact((n-r));
        
        int nCr = nfact/(rfact * (nMrfact));
        cout << "The value of ncr is: "<< nCr;
    }

    return 0;
}