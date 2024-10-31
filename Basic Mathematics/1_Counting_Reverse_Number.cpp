#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7789;
    int original = n;
    int reverse = 0;
    while(n>0){
        int lastDigit = n%10;   // Extracting the last digit of the number
        reverse = reverse*10 + lastDigit;   // Adding the last digit to the reverse number
        n = n/10;   // Removing the last digit from the number
    }
    cout<< "The reverse of the number is: "<< reverse << endl;

    int no = log10(original) + 1; // Number of digits in the original number
    cout<< "The number of digits in the original number is: "<< no << endl;
    return 0;
}