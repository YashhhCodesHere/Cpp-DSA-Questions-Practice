#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){  // Constructor: Most likely to be used. No need to add next pointer everytime.
        data = val;
        next = nullptr;
    }

    Node (int val, Node* nextt){    // Here we are adding next pointer everytime, whenever we create a new node.
        data = val;
        next = nextt;
    }
};

int main()
{

    Node* l1 = new Node(12);    // Here we pass the value as a argument only and by default next pointer points to nullptr.
    Node* l2 = new Node(41, l1);
    Node* l3 = new Node(132, l2);
    Node* l4 = new Node (11, l3);  // If we store l1 instead of nullptr here, the it will become a circular linked list. 


    // Displaying the linked list:-
    cout << l1->data <<" -> ";
    cout << l2->data <<" -> ";
    cout << l3->data <<" -> ";
    cout << l4->data <<" -> ";
    cout<<"NULL"<<endl;
    return 0;
}