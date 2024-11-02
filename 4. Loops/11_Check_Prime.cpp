#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool isPrime = true;
    for(int i = 2; i <= sqrt(num); i++){
        if(num%i == 0 || num%(num-i) == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << num << " is Prime!\n";
    }else{
        cout << num << " is NOT Prime!\n";
    }
    return 0;
}