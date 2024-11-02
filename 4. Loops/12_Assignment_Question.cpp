#include <bits/stdc++.h>
using namespace std;

int main(){
    // 1.
    int num, fact = 1;
    cout << "Enter the number: ";
    cin >> num;

    for(int i = num; i > 0; i--){
        fact *= i;
    }

    cout << "Factorial of " << num << " is: " << fact << "\n";

    // 2.
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << num << " * " << i << " = " << (num*i) <<"\n";
    }

    // 4.
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 2; i <= num; i++){
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << " ";
        }

    // 5. 
    int n;
    cout << "Enter numbers: ";
    cin >> n;
    int num1 = 0, num2 = 1;
    cout << "0th fibonacci number is: " << num1 << "\n";
    if (n > 1) {
        cout << "1st fibonacci number is: " << num2 << "\n";
    }
    for(int i = 2; i <= n; i++){
        int num3 = num1 + num2;
        cout << i << "th fibonacci number is: " << num3 << "\n";
        num1 = num2;
        num2 = num3;
    }
    
    return 0;
}