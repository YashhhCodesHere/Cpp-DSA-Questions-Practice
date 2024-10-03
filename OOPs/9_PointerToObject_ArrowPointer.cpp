#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real, imaginary;
public:
    void setData(int r, int i){
        this -> real = r;   // Here 'this' is a pointer which points to the object 
        imaginary = i;
    }

    void getData(){
        cout<<"The value of real part is: "<< real << endl;
        cout<<"The value of imaginary part is: "<< imaginary << endl;
    }
};

int main()
{
    Complex c1;
    c1.setData(19,20);
    c1.getData();

    cout<< "\nUsing pointer to access data of object c1:- \n"<< endl;

    Complex *ptr = &c1;
    (*ptr).getData();   // Here Parentheses is very crucial & are used with *ptr because . has higher precedence than *

    cout<< "\nUsing Arrow Pointer to access data of object c1:- \n"<< endl;

    Complex *ptr1 = new Complex;
    (*ptr1).setData(10,30);
    (*ptr1).getData();

    // Arrow Operator can be used to dereference the pointer and access the data members of the object!

    // Arrow Operator:-
    cout<< "\nUsing Arrow Operator to access data of object c1:- \n"<< endl;
    cout<< "Using Arrow Operator to get the data of pointer ptr1: ";
    ptr1->getData();  // Arrow Operator is used to access the data members of the object using pointer
    return 0;
}