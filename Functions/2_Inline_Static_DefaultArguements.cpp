#include <bits/stdc++.h>
using namespace std;

// Inline function is used only when the function is small, or it is called multiple times:

// Default arguements must be at the extreme right or at the end of the arguements list.
inline int product(int a, int b, int d = 10){   // Inline function is used to reduce the function call overhead which is used to reduce the time complexity.
    static int c = 0;   // This will be executed only once.
    c = c+1;    // Next time whenever this function will run, the value of c will be retained.
    return a*b+c-d;
}

int strlength(const char *p){
    int count = 0;
    while(*p != '\0'){
        count++;
        p++;
    }
    return count;
}

int main()
{
    int a, b;
    cout<<"Enter the value of A & B: ";
    cin>>a>>b;
    cout<<"The product of a & b is: "<< product(a, b);
    return 0;
}