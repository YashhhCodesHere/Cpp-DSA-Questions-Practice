#include <bits/stdc++.h>
using namespace std;

/*
    Static Keyword: Variables declared with the 'static' keyword are created and initialized only once for the entire LIFETIME of the program.
    Static Variables in a class are created and initialized only once for the entire program, & They are shared with all the objects of the class.

    Usage of Static Keyword:-
    1. Static Variables
    2. Static Functions in a class
    3. Static Objects
*/

// Static Variable:-
void counter(){
    static int count = 0;    // This line will be executed only once.
    count++;
    cout << "Count = " << count << "\n";
}

// Static Variable in a class:-
class Example{
public:
    Example(){
        cout << "Constructor Called \n";
    }
    static int x;   // This can't be initialized here, as it will be shared with all the objects of the class.

    ~Example(){
        cout << "Destructor Called \n";
    }
};
int Example :: x = 0;   // This is how we initialize the static variable.    :: -> x have declaration in Example class, and We are performing initialization using scope resolution operator here.



int main(){
    counter();
    counter();
    counter();
    counter();

    Example e1, e2;
    cout << ++(e1.x) << "\n";
    cout << e1.x++ << "\n";
    cout << e2.x++ << "\n";

    // Here, Every objects of Example class will be sharing the same 'x' variable declared in memory.

    int a = 0;
    if(a == 0){
        // Static Objects:-
        static Example e3;
    }

    cout << "Main Function Ended \n";

    // Here, e3 is static object, So it will be destroyed only at the time of program termination, Otherwise, it will be destroyed at the end of the scope.

    return 0;
}