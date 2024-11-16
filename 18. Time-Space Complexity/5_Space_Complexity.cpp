#include <bits/stdc++.h>
using namespace std;

/*
    TIME COMPLEXITY > SPACE COMPLEXITY ,
    As,
        Because in these days, the memory is very cheap & the time is very expensive.
        We can easily buy more memory but we can't buy more time.
        So, we always prefer to use concentrate on Time Complexity rather than Space Complexity.
*/

/*
    (All the notations which are used for Time Complexities are same used for Space Complexity too)
    Our code were stored in Two Types of memories, either in Stack(Static Memory) or in Heap(Dynamic Memory).

    SPACE COMPLEXITY: The amount of extra memory used by the algorithm (to execute the code), as a function of input size(n).alignas
    So, 
        Our code take space in two ways:-
        1. For the Variables we declare in the code -> Input Size
        2. Extra Space used by the code -> Auxiliary Space

    So, Space Complexity = [ Input Space + Auxiliary Space ]:
    -> But for calculating the Space Complexity, we only consider the Auxiliary Space used by the code.
*/

int main(){
    // Ex:-
    int n;

    int arr[n];
    int temp[n];

    // Here, the Space Complexity of the code is O(n) because we are using two arrays of size n.

    return 0;
}

/*
    While making some variables inside a function doesn't take any extra space, because the space for the variables is allocated in the Stack Memory. 
    Hence, it's considered as the Input Space & Not be considered while calculating the Space Complexity.

    Spaces like when we create:-
    1. Arrays
    2. Vectors
    3. Maps
    4. Stacks
    5. Queues
    6. Trees
    7. Graphs
    8. Linked Lists, etc.

    - will be treated as the Auxiliary Space & will be considered while calculating the Space Complexity.

*/