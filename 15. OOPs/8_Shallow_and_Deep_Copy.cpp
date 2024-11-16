#include <bits/stdc++.h>
using namespace std;

/*
    Shallow & Deep Copy:-
    In Shallow Copy: The data members of the old object are copied to the new object as it is.alignas
    - Here, Every Static Data Member is copied to the new object, & Dynamic Data Members are copied as the ADDRESS(Reference) of the old object.
    - So, If we modify the array or dynamically allocated memory of the new object, it will also modify the old object. 

    * Whenever Copy Constructor is called, it creates a Shallow Copy of the object.

    In Deep Copy: The data members as well as the dynamically allocated memory of the old object are copied to the new object.
    - Here, Every Static Data Member is copied to the new object, & Dynamic Data Members are copied as the VALUE of the old object.
    - So, NO modification in the new object will affect the old object.

    * We have to create our own Copy Constructor to create a Deep Copy of the object.
*/

class Car{
public:
    int price;
    int *wheels;

    Car(int p, int w){
        price = p;
        wheels = new int;
        *wheels = w;
    }

    void setPrice(int p){
        price = p;
    }

    void setWheels(int w){
        *wheels = w;
    }

    int getPrice(){
        return price;
    }

    int getWheels(){
        return *wheels;
    }

    void print(){
        cout << "Price: " << price << "\n";
        cout << "Wheels: " << *wheels << "\n";
    }

    // Shallow Copy Constructor:-
    Car(Car &original){
        price = original.price;
        wheels = original.wheels;
    }

    // Deep Copy Constructor:-
    Car(Car &original){
        price = original.price;
        wheels = new int;
        *wheels = *(original.wheels);
    }

};

int main(){
    Car c(100, 4);
    Car d(c);  // Copy Constructor -> Another constructor is called to copy the data of c to d by the compiler implicitly.
    c.setPrice(200000);

    *d.wheels = 5;  // Changing the wheels of d will also change the wheels of c.
    cout << "The wheels of c are: " << c.getWheels() << "\n";  // Output: 5
    cout << "The wheels of d are: " << d.getWheels() << "\n";  // Output: 5
    return 0;
}