#include <bits/stdc++.h>
using namespace std;

/*
    Operator Overloading:- (Compile Time Polymorphism)
    Here, we can make the operators to work for user-defined classes.

    Syntax:-
        return_type operator op (parameters){
            // Code
        }
*/

class Complex{
    int real, imag;
public: 
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    void showNumber(){
        cout << real << " + " << imag << "i \n";
    }

    void add(Complex second){   // Operator Overloading -> Not following actual syntax but still works.
        cout << this -> real + second.real << " + " << this -> imag + second.imag << "i \n";
    }

    void operator+(Complex second){   // Operator Overloading -> Following actual syntax.
        cout << this -> real + second.real << " + " << this -> imag + second.imag << "i \n";
    }

    void operator - (Complex obj){
        int resReal = this -> real - obj.real;
        int resImag = this -> imag - obj.imag;
        Complex res(resReal, resImag);
        res.showNumber();
    }
};

int main(){
    Complex c1(1, 2), c2(3, 4);
    c1.showNumber();
    c2.showNumber();

    // Here, we are calling the add function of c1 object and passing c2 object as an argument.
    c1.add(c2);

    // Here, we just use the '+' operator to add the two complex numbers.
    c1 + c2;
    // This will make 2 objects c1 and c2 to be added using the '+' operator.  

    return 0;
}