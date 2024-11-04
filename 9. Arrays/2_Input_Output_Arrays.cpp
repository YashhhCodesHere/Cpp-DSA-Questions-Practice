#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks[5] = {7, 5, 2, 1, 3};
    int size = sizeof(marks) / sizeof(marks[0]);
    for(int i = 0; i < size; i++){
        cout << marks[i] << " ";
    }
    cout << "\n";
    
    return 0;
}