#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList
{
public:
    Node *head;

    LinkedList() : head(nullptr) {}

    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);
        Node *temp = head;

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteNode(int val)
    {
        // If linked list is empty:-
        if (head == NULL)
        {
            cout << "Linked List is empty!" << endl;
            return;
        }

        // If there is only one node in the linked list:-
        if (head->next == nullptr)
        {
            if (head->data == val){
                delete head;
                head = nullptr;
            }else{
                cout << "Node with value " << val << " not found." << endl;
            }
            return;
        }

        // If we want to delete the first node:-
        if (head->data == val)
        {
            Node *toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        // For deleting rest of the node:-
        Node *temp = head;
        while (temp->next != nullptr && temp->next->data != val)
        {
            temp = temp->next;
        }

        // If the node to be deleted is not found
        if (temp->next == nullptr)
        {
            cout << "Node with value " << val << " not found." << endl;
            return;
        }

        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    void display()
    {
        Node *temp = head;
        cout<<"\nLinkedList: ";
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main()
{
    LinkedList ll;

    // for (int i = 1; i <= 5; i++)
    // {
    //     ll.insertAtTail(i);
    // }
    ll.insertAtTail(5);
    ll.deleteNode(1);
    ll.display();

}