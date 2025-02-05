#include <bits/stdc++.h>
using namespace std;

class Student{  // Operator Overload for Priority Queue insertion
public:
    string name;
    int marks;

    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const Student &obj) const {
        return this->marks < obj.marks;     // Condition for Max-Heap building on the basis of marks
        // Reverse the < sign in return statement only to make the Min heap
    }

};

int main(){
    priority_queue<Student> pq;

    pq.push(Student("Yash", 99));
    pq.push(Student("Robinn", 95));

    while(!pq.empty()){
        cout << "Name: " << pq.top().name << ", Marks: " << pq.top().marks << "\n";
        pq.pop();
    }

    return 0;
}