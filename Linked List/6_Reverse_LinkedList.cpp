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

    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Iterative approach:- 
    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;
        while (current != nullptr)
        {
            next = current->next;

            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    // Recursive approach:- 

    Node* reverseRecursive(Node* node)
    {
        if (node == nullptr || node->next == nullptr)
        {
            return node;
        }
        Node* newHead = reverseRecursive(node->next);
        node->next->next = node;
        node->next = nullptr;
        return newHead;
    }

    void reverseRecursive()
    {
        head = reverseRecursive(head);
    }

    void display()
    {
        Node *temp = head;
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

    for (int i = 1; i <= 5; i++)
    {
        ll.insertAtTail(i);
    }

    cout << "Original List: ";
    ll.display();

    ll.reverse();

    cout << "Reversed List (Iterative): ";
    ll.display();

    ll.reverseRecursive();

    cout << "Reversed List (Recursive): ";
    ll.display();

    return 0;
}