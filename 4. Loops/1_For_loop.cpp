#include <bits/stdc++.h>
using namespace std;

/*
    For loop is used to iterate over a sequence of elements.
    Syntax:
        for(initialization; condition; increment/decrement)
        {
            // code
        }
*/
/*
    Loops are ITERATED while Arrays or Linked Lists are TRAVERSED.
    Iterate -> To repeat a process.
    Iteratiion -> One repetition of a process.
    Iterator -> A variable that is used to iterate. = Counter Variable.

*/
int main()
{
    int i;
//  The scope of i is limited to the loop if it is declared inside the loop.
    for(i = 1; i <= 10; i++){
        cout << i << "->";
    }
    cout << "NULL\n";
    cout << "The value of i after loop is: " << i << "\n";

    return 0;
}

//  INFINITE LOOP: If the condition is always true, then the loop will run infinitely.
//  for(;;) -> This is an infinite loop.
//  Infinite loop is also called as DEADLY LOOP, because it can crash the system.