#include<iostream>
#include<vector>
using namespace std;

/*
    Vectors:-  (also known as Sequence Containers) -> #include <vector>
    Vector is a dynamic array, which can grow or shrink in size, although they are stored sontiguously in memory.
    It's NOT actually Dynamic Array, but it's a class which provides dynamic array functionality.
    Syntax:-
    1. vector<datatype> name;                                                        // Declaration of a vector.
    2. vector<datatype> name = {1,2,3,4,5};                                          // Declaration as well as Initialization of a vector.
    3. vector<datatype> name(size, initialisation_value);                            // Declaration of a vector with size & initialisation value.
       -> If now initialisation value is given => (By Default vector is initialised with 0.)

*/

int main(){
    vector<int> vec(10, -1);
    cout << "Size of the vector is: " << vec.size() << "\n";  // Returns the size of the vector.

    cout << "Elements of the vector are: ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << "\n";

    vector<int> vec1(5);
    cout << "Size of the vector is: " << vec1.size() << "\n";  
    cout << "Capacity of the vector is: " << vec1.capacity() << "\n";  

    cout << "\nAdding one more element to the vector so that it's capacity will gets increased:-\n";
    vec1.push_back(10); 
    cout << "Size of the vector is: " << vec1.size() << "\n";  
    cout << "Capacity of the vector is: " << vec1.capacity() << "\n";  
    return 0;
}


//   Must use -std=c++11 while compiling the code, as it is using C++11 features.
//   From now onwards, we're going to use vectors instead of arrays, as they are more efficient & easy to use -> For solving problems.

/*
    Vector Implementation in memory:-
    Vector have both 'size' as well as 'capacity',
    where; 
        size -> Number of elements present in the vector. => (size <= capacity).
        capacity -> Number of elements that can be stored in the vector => It gets doubled when the size of the vector exceeds the capacity.
    However, if those elements gets popped out, then the capacity remains the same, but the size gets decreased.
    
    As usual, it takes O(1) time to store the elements in the vector, 
    but when the size of the vector exceeds the capacity, then it takes O(n) time to store the elements in the vector, 
    as it has to copy the elements from the old vector to the new vector.
    But, we take ammortized(avg) time complexity, which is O(1) for storing the elements in the vector.
*/
