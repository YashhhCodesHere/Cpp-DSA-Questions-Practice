#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  For Loop:-
    int i;
    //  Now we don't have to declare datatype of 'i' inside for loop... & we can use it outside for loop too!
    for(i = 1; i<=5; i++){
        cout << i << " - Yash!\n";
    }
    cout << "The value of i is: " << i << endl;

    //  While Loop:-
    int j = 1;
    while(j<=5){
        cout << "Robinn " << j << endl;
        j++;    // This step of variable increment is very necessary else your loop will goes through infinte stuck...
    }
    cout << "The value of j is: " << j << endl;

    // Do-While Loop:-
    int k = 1;
    do{
        cout << "Yashhh " << k << endl;
        k++;
    }while(k<=1);
    cout << "The value of k is: " << k << endl;

    // Sum of all odd numbers from 1 to 'N':-
    
    int n, sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i+=2){
        sum+=i;
    }
    cout<<"The sum of n-odd numbers is: "<<sum;

    // Check prime number:-
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(!isPrime){
        cout<<"Not Prime\n";
    }else{
        cout<<"Prime\n";
    }
    return 0;
}