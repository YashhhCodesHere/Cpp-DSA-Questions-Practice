#include <bits/stdc++.h>
using namespace std;

/*
    INHERITANCE: When the properties(Data Members) & methods(Member Functions) of one (BASE)Class are inherited by another (DERIVED)Class, then it is called Inheritance.
    - The class whose properties & methods are inherited is called Base Class.
    - The class which (Gets those properties) inherits the properties & methods is called Derived Class.
    - Inheritance is used to reuse the code.

                                    [Base Class/Parent Class/Super Class] 
                                                    |
                                                    |
                                                    |
                                                    V
                                    [Derived Class/Child Class/Sub Class]

    Syntax:- (IN C++)  -> We use ':' to inherit the properties & methods of Base Class, & then we write the Access Specifier(By Default = Private) of the Base Class.
    -------
            class DerivedClass : AccessSpecifier BaseClass{
                // Derived Class Body
            }


    In INHERITANCE:-
    - Private Members can never be inherited.
    - Protected Members => Private + Inherited.
    - Means if we inherit a class using Access Specifiers:-
        That Access Specifier will decide the visibility of the Members of the Base Class in the Derived Class.
        (Jis prakaar ka Access Specifier hum Base Class ko define krte hai, Usi prakaar ke members banke aayengai Derived Class me.)
*/

class Animal{
public:
    string color;

    void eats(){
        cout << "Eating...\n";
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

int main(){
    
    return 0;
}