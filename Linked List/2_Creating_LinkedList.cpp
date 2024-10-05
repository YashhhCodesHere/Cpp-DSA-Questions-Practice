#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }

    void insertAtHead(node *&head, int val)
    {
        node* n = new node(val);
        n->next = head;
        head = n;
    }

    void insertAtTail(node *&head, int val)
    {
        node *n = new node(val);

        if (head == nullptr)
        {
            head = n;
            return;
        }

        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

    void display(node *head)
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    node *head = NULL;
    head->insertAtTail(head, 1);
    head->insertAtTail(head, 2);
    head->insertAtTail(head, 3);

    head->display(head);
    return 0;
}