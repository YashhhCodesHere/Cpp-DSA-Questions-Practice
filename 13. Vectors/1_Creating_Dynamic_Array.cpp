#include <bits/stdc++.h>
using namespace std;

/*
    int arr[100];    -> Static Array => Contigous memory is allocated at compile time of 100 size & name of the array will be pointing to the base address / First element of the array.

    We use 'new' keyword to create new memory at runtime in heap memory.e.g. int *arr = new int[100]; => Dynamic Array

    Static Memory Allocation -> Memory allocation at compile time in stack memory.
    Dynamic Memory Allocation -> Memory allocation at runtime in heap memory.

    Whenever we use DMA -> It's must to delete the memory allocated in heap memory, otherwise it will lead to 'Memory Leak'.
*/

int funcInt(){
    int *ptr = new int;  // Dynamic Memory Allocation
    *ptr = 10;
    cout << "Value of the pointer is: " << *ptr << endl;
    delete ptr;  // Free the memory allocated in heap memory.
    return 0;
}

int funcArr(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *ptr = new int[n];  // Dynamic Memory Allocation
    for(int i = 0; i < n; i++){
        ptr[i] = i + 1;
        cout << ptr[i] << " ";
    }
    delete [] ptr;  // Deleting the memory allocated in heap memory. -> "Avoiding Memory Leak"
    return 0;
}

int main()
{
    // Creating Dynamic Array:-
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Here new memory is allocated of size 'size' in heap memory at the runtime, & *arr is a pointer pointing to the base address of the array.
    int *arr = new int[size]; // Dynamic Array Created
//  *arr 'Pointer' is created in stack memory pointing to the base address of the array in heap memory. (VVI)

    // Input the elements of the array:-
    cout << "Elements of the dynamic array are: ";
    for(int i = 0; i < size; i++){    // We can access the elements of the array using pointer *arr -> Works same as normal static array.
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    

    return 0;
}

/*
    Static Allocation:-
    1. Memory is allocated at compile time in stack memory.
    2. Memory is fixed.
    3. All the variables and functions can't be accessed whenever that stack frame is popped out.
    4. Memory allocated will automatically be freed.

    Dynamic Allocation:-
    1. Memory is allocated at runtime in heap memory.
    2. Memory can be increased or decreased.
    3. Memory can be accessed from anywhere in the program using pointer, as it is allocated in heap memory.
       So, if you make some variable dynamically inside any function, then you can access that variable from any other function like main() too,
       Untill & Unless you have the pointer pointing to that variable.
    4. If you made the pointer to that dynamic memory allocated, inside the function,
       so, when the function ends, the pointer will be popped out from the stack memory, but the memory will still allocated in heap memory will not be popped out.
       resulting to the situation called 'Memory Leak'.

       Memory Leak -> A memory leak occurs when a computer program allocates memory but doesn't release it when it's no longer needed.
                      This can happen when an object is stored in memory but the running code can't access it, because the pointer to the object has been lost.
                      It leads to reduced performance and can cause the system to slow down or crash, due to depletion of available memory.

    5. To avoid memory leak, we use 'delete' keyword to delete the memory allocated in heap memory.
       ex:-
       delete variable_name; -> To delete the memory allocated to the variable.
       delete [] ptr; -> To delete the memory allocated to the array.

*/