#include <bits/stdc++.h>
using namespace std;
#define max_size 10
class Queue{
public: 
    int* arr;
    int front;
    int back;

    Queue(){
        arr = new int[max_size];
        front = -1;
        back = -1;
    }
    
    void push(int val){
        if(back == (max_size - 1)){
            cout << "Queue Overflow!\n";
            return;
        }
        arr[++back] = val;
        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front == -1 || front > back){
            cout << "No elements in the Queue!\n";
            return;
        }
        front++;
    }

    void peek(){
        if(front == -1 || front > back){
            cout << "No elements in the Queue!\n";
            return;
        }
        cout << "Peeking Queue: " << arr[front] << endl;
    }

    void empty(){
        if(front == -1 || front > back){
            cout << "Queue is Empty!\n";
            return;
        }else{
            cout << "Queue is NOT Empty!\n";
            return;
        }
    }
    
    void display(){
        if(front == -1 || front > back){
            cout << "No elements in the Queue!\n";
            return;
        }
        cout << "Elements in the Queue are: ";
        for(int i = front; i<=back; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    for(int i = 1; i<=5; i++){
        q.push(i);
    }

    // Displaying all the elements of queue:-
    q.display();

    // Checking first element of queue:-
    q.peek();

    // Removing first element of queue:-
    q.pop();

    // Checking first element of queue:-
    q.peek();

    // Removing all the element from queue:-
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    
    // Now Checking if queue is empty or not:-
    q.empty();

    return 0;
}