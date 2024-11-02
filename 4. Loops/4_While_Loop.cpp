#include <bits/stdc++.h>
using namespace std;

/*
    While loop: It is used to iterate over a block of code as long as the condition is true.
    Syntax:
        // initialization
        while(condition)
        {
            // code
            //update the condition
        }
    *Infinite Loop is more common in while loop.
*/
int main()
{
    int i = 10;
    cout << "Printing numbers from 10 to 25:\t";
    while(i <= 25){
        cout << i << " ";
        i++;
    }
    cout << "\n";
    return 0;
}