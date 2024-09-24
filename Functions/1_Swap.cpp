#include <bits/stdc++.h>
using namespace std;

// Call by value:-
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers:-
void swapByPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using reference variable:-
void swapByVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a=2,b=5;
    cout<<"The value of a is: "<<a<<" & b is: "<<b<<endl;
    swap(a,b);  // The value of variable is passed here i.e., Passed by value!
    cout<<"After Swapping:-\n";
    cout<<"The value of a is: "<<a<<" & b is: "<<b<<endl;
    swapByPointer(&a,&b);
    cout<<"The value of a is: "<<a<<" & b is: "<<b<<" after using a pointer!"<<endl;
    swapByVar(a,b);
    cout<<"The value of a is: "<<a<<" & b is: "<<b<<" after using a address variable!"<<endl;
    return 0;
}