#include <bits/stdc++.h>
using namespace std;

/*
    Friend Class Or Function can access the private & protected members of the class.

    Priority: Friend Class > Friend Function > Normal Class

    Priority: Dynamically Object Created > Pointer of other class 
*/

class A{
    string secret = "I am a secret";

    friend void revealSecret(A &obj);    // Friend Function!
    friend class B;    // Friend Class!

    // After the above line, B class can access the private members of A class, but vice-versa is not possible!
};

class B{
public:
    void showSecret(A &obj){
        cout << obj.secret << "\n";
    }    
};

void revealSecret(A &obj){
    cout << obj.secret << "\n";
}

int main(){
    A a;
    B b;

    b.showSecret(a);

    return 0;
}