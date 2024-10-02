#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    cout<< "Enter the value: ";
    cin>> value;
    // New Keyword:-
    int* ptr = new int(value); // Dynamically allocating memory to a pointer
    cout<< "The Value inside pointer is: "<< *ptr << endl;

    int* arr = new int[3]; // Dynamically allocating memory to an array
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    cout<< "The Value inside array at index 0, 1 & 2 are: "<< arr[0] << " " << arr[1] << " " << arr[2] << endl;

    // Delete Keyword:-
    delete ptr; // Deleting the memory allocated to the pointer
    delete[] arr; // Deleting all the memory allocated to the array
    return 0;
}