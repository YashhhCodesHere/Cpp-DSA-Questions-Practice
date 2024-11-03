#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
    int org = n;
    int temp = 0;
    while(n > 0){
        int lastDigit = n%10;
        temp = (temp*10) + lastDigit;
        n /= 10;
    }
    if (org == temp) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    bool result = checkPalindrome(n);

    (result)?(cout << "True"):(cout << "False");

    return 0;
}