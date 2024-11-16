#include <bits/stdc++.h>
using namespace std;

/*
    Types of Inheritance:-
    ---------------------
    1. Single Inheritance:- When a class is inherited by only one class, then it is called Single Inheritance.
                            [Base Class]
                                V
                            [Derived Class]

    2. Multi Level Inheritance:- When a class is inherited by another class, & that class is inherited by another class, then it is called Multi Level Inheritance.
                            [Base Class]
                                V
                            [Derived Class]
                                V
                            [Derived Class]

    3. Multiple Inheritance:- When a class is inherited by more than one class, then it is called Multiple Inheritance.
                            [Base Class]  [Base Class]
                                V              V
                                ---------------
                                       V
                                [ Derived Class ]

    4. Hierarchical Inheritance:- When a class is inherited by more than one class, then it is called Hierarchical Inheritance.
                                    [Base Class]
                                --------------------
                                V                  V                   
                            [Derived Class]  [Derived Class]

    5. Hybrid Inheritance:- When a class is inherited by more than one class, & that class is inherited by another class, then it is called Hybrid Inheritance.
                                    [Base Class]  [Base Class]
                                         V             V
                                         ---------------
                                                V
                                        [ Derived Class ]
                                                V
                                        [ Derived Class ]

*/
                                 

class Animal{
public:
    string color;

    void eats(){
        cout << "Eating...\n";
    }

    void breathe(){
        cout << "Breathing...\n";
    }

    void speak(){
        cout << "Grrr...\n";
    }
};

class Fish : public Animal{
public:
    int fins;

    void swim(){
        cout << "Swimming...\n";
    }
};

class Mammal : public Animal{
public:
    string bloodtype;

    Mammal(){
        bloodtype = "Cold Blooded";
    }

    void walk(){
        cout << "Walking...\n";
    }
};

class Dog : public Mammal{
public:
    void tailWag(){
        cout << "Tail Wagging...\n";
    }
};

// Multiple Inheritance:-
class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int rollno;
    float cgpa;
};

class TeachingAssistant : public Teacher, public Student{
public:
    void work(){
        cout << "Working...\n";
    }
};


int main(){
//  Simple Inheritance:-
    Fish f1;
    f1.eats();
    f1.speak();
    f1.swim();
    
//  Multi Level Inheritance:-
    Dog d1;
    d1.eats();
    d1.tailWag();

//  Multiple Inheritance:-
    TeachingAssistant ta1;
    ta1.salary = 50000;
    ta1.subject = "Maths";
    cout << "Salary: " << ta1.salary << "\n";

    return 0;
}