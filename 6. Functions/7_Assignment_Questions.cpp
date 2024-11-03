#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while (n > 0){
        int lastDigit = n%10;
        sum += lastDigit;
        n /= 10;
    }
    return sum;
}

int wholeSquare(int a, int b){
    int sq = (pow(a, 2)) + (pow(b, 2)) + (2*a*b);
    return sq;
}

int largest(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }else if(b >= a && b >= c){
        return b;
    }else{
        return c;
    }
}

char afterCh(char c){
    if(c == 'z') return 'a';
    if(c == 'Z') return 'A';

    return ++c;
}

int main()
{
    // 2.
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    cout << "Sum of digits of " << n << " is: " << sumOfDigits(n) << "\n";

    // 3. 
    int a, b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;
    
    cout << "(" << a << " + " << b << ")^2 = " << wholeSquare(a, b) << "\n";

    // 4. 
    int p ,q ,r;
    cout << "Enter three numbers: ";
    cin >> p >> q >> r;
    
    cout << "Largest of (" << p << ", " << q << ", " << r << ") is: " << largest(p, q, r) << "\n";

    // 5.
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    
    cout << "The character after " << ch << " is: " << afterCh(ch) << "\n";

    return 0;
}