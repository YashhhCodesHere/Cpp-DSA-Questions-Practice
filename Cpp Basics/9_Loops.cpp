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
    return 0;
}