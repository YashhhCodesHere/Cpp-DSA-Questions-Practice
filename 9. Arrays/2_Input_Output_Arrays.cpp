#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    // INPUT:-
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // OUTPUT:-
    cout << "Elements of the arrays are: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    return 0;
}