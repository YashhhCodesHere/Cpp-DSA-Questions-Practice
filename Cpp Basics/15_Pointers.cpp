#include <bits/stdc++.h>
using namespace std;

int main()
{
    // & and * are inverses of each other! 
    // & --> Address of Operator
    // * --> Value at Operator
    int a = 5;
    int* b = &a;    
    cout<<b;

    // & (Ampersand) --> is used to get the address of a variable
    cout<<"The address of a using ampersand is: "<< &a <<endl;
    cout<<"The value of a using pointer is: "<< b <<endl;

    // * --> (Dereference Operator)is used to get the value at the address
    cout<<"The value of a using pointer is: "<< *b <<endl;

    // Pointer to a Pointer:-
    int** c = &b;
    cout<<"The address of b using pointer is: "<< c <<endl;

    int arr[] = {1, 2, 3, 4, 5};
    int* d = arr;   // This will point to the first element in the array while '&' is not used here because the array name itself is a pointer
    d++;    // This will point to the next element in the array
    cout<<"The value of arr[1] is: "<< *d <<endl;
    return 0;
}