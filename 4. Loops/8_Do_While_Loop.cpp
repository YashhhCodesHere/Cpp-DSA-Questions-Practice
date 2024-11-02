#include <bits/stdc++.h>
using namespace std;

/*
    Do-While Loop: It is used to iterate over a block of code as long as the condition is true.
    Syntax:
        // initialization
        do
        {
            // code
            //update the condition
        }while(condition);
    
    *The block of code is executed at least once, even if the condition is false.
*/
int main()
{
    int i = 10;
    cout << "Printing numbers from 10 to 25:\t";
    do
    {
        cout << i << " ";
        i++;
    }while(i <= 25);

    // Semi-colon is necessary after the while loop.
    return 0;
}