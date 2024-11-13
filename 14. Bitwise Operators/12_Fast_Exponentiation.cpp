#include <bits/stdc++.h>
using namespace std;

/*
    For any number n -> On the basis of nitigrities, It's max binary digits will be => [ log2(n) + 1 ]. 
    
    For calculating the power of a number, we need to:-
    1. Initialize the result as 1.
    2. If the 0th(RightMost) bit of the power is set, multiply the result with the number.
    3. Multiply the number with itself.
    4. Right shift the power by 1.
    5. Repeat the above steps until the power becomes 0.

    Ex:-
        2^5 = 32            x = 2, n = 5

    Binary Form:     n = 5 =>    0 1 0 1

                  0       1       0       1
                (2^8) * (2^4) * (2^2) * (2^1)  =>  32


*/

int main(){
    int n, pow, ans = 1;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> pow;


    while(pow > 0){
        if(pow & 1){
            ans *= n; 
        }
        n *= n;
        pow >>= 1;
    }
    cout << "Result: " << ans << endl;
    return 0;
}