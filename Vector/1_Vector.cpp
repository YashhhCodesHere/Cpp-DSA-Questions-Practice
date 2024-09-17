#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1st Method:-
    vector<int> vec;    //  Declaration of vector named vec with int 
    
    // 2nd Method:-

    vector<int> arr = {1,2,3,4,5};
    for(int val : arr){     // For printing all the vector elements:
        cout<<val<<" ";
    }

    // 3rd Method:-
    vector<int> arr1(5, 0);    // 5 elements all with value 0

    // Vector Functions:-
    cout<<"\nThe size of the 'vec' is: "<<vec.size()<<endl;     // Prints the Size of vector
    vec.push_back(5);    // Adds element 5 to the vector 'vec'
    vec.push_back(10);    // Adds element 10 to the vector 'vec'
    vec.push_back(20);    // Adds element 20 to the vector 'vec'
    cout<<"The 0th element of the vec: "<<vec[0]<<endl;  
    vec.pop_back();     // Removes the last element of the vector
    cout<<"Printing the first element of the vector: "<<vec.front()<<endl;    // Prints the first element of the vector
    cout<<"Printing the last element of the vector: "<<vec.back()<<endl;    // Prints the last element of the vector
    cout<<"For printing the value at index 1: "<<vec.at(1)<<endl;    // Prints the value at index 1
    cout<<"For checking if the vector is empty or not: "<<vec.empty()<<endl;    // Returns 1 if empty else 0
    vec.clear();    // Clears the vector"
}