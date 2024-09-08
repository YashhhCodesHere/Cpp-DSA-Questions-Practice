#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1D Array:-
    int _1D_Arr[5];    // This line will gonna make an array of size = 5 whose name will be 'input_number'
    // Unassigned array stores garbage values inside it!
    cin >> _1D_Arr[0] >> _1D_Arr[1] >> _1D_Arr[2] >> _1D_Arr[3] >> _1D_Arr[4];

    _1D_Arr[2] += 15;  // Modifying array's value!
    cout << _1D_Arr[3];
    
    // 2D Array:-   (Widely used while solving martix problems or graphs problems)
    int _2D_Arr[3][5];  // This line will create a 2D array of size 3x5, Where 3 denotes Rows & 5 denotes Column!


    return 0;
}