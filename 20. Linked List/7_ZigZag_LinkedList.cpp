#include <bits/stdc++.h>
using namespace std;

/*
    We have to reorder the list in Zig-Zag manner with inplace operation. (i.e., without using extra space)
    Ex:-
    Input: 1 -> 2 -> 3 -> 4 -> 5
    Output: 1 -> 5 -> 2 -> 4 -> 3  
    
*/
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    ListNode* head;

    LinkedList() : head(nullptr) {}

    void append(int val) {
        if (!head) {
            head = new ListNode(val);
        } else {
            ListNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new ListNode(val);
        }
    }

    ListNode* splitAtMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != nullptr) {
            prev->next = nullptr;
        }

        return slow;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* forw = nullptr;

        while (curr != nullptr) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }

    void reorderList() {
        if (!head || !head->next) return;

        ListNode* rightHead = splitAtMid(head);
        ListNode* rightHeadReversed = reverse(rightHead);

        ListNode* left = head;
        ListNode* right = rightHeadReversed;
        ListNode* tail = right;

        while (left != nullptr && right != nullptr) {
            ListNode* leftNext = left->next;
            ListNode* rightNext = right->next;

            left->next = right;
            right->next = leftNext;

            tail = right;

            left = leftNext;
            right = rightNext;
        }

        if (right != nullptr) {
            tail->next = right;
        }
    }

    void printList() {
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    cout << "Original list: ";
    list.printList();

    list.reorderList();

    cout << "Reordered list: ";
    list.printList();

    return 0;
}