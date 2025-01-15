#include <iostream>
#include <list>
#include <iterator>

/*
    Iterators in c++ are objects that allows you to traverse through the elements of a container. like list, vector, etc. in a sequential manner. 
    It can be used via the begin() and end() functions of the container.
    i.e.,
    ll.begin() = (iterator of head)
    ll.end() = (iterator of tail -> next)
*/

using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;

    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout << (*itr) << " -> ";
    }
    cout << "NULL\n";
}


int main(){
    list<int> ll;

    // For inserting elements:-
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);

    // For printing, we'll use 'iterator':-
    list<int>::iterator itr;
    printList(ll);
   
   // For getting number of NODES or Size of List:-
    cout << "Size of List: " << ll.size() << endl;

    // To get head and tail value of List:-
    cout << "Head: " << ll.front() << endl;
    cout << "Tail: " << ll.back() << endl;

    // To remove first and last element:-
    ll.pop_front();
    ll.pop_back();
    printList(ll);

    // To insert element at a specific position:-
    itr = ll.begin();
    advance(itr, 1);    // To move iterator to 1st position
    ll.insert(itr, 5);
    printList(ll);

    // To erase element at a specific position:-
    itr = ll.begin();
    advance(itr, 2);    // To move iterator to 2nd position
    ll.erase(itr);
    printList(ll);
    
    return 0;
}