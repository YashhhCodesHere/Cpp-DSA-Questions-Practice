#include<iostream>
#include<stack>
using namespace std;

/*
    We include STL header file <stack> to use the stack container.
    which starts with small 's' and not capital 'S' like the class name which we define.

    Whenever we Pass STL Containers into functions, 
    They are 'Passed by Value' and not by reference.
    So, the function will get a copy of the container and not the original container.
    Hence, we add '&' to pass by reference.

    To reflect the changer of STL Containers in main() function,
    we need to pass them by reference, with the help of '&', written as:
    void function(stack<int>& s) {
        // code
    }
*/

int main(){
    stack<int> s;
    s.emplace(10);
    cout << s.top();
    return 0;
}