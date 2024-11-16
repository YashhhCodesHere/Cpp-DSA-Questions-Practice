#include <bits/stdc++.h>
using namespace std;

// It's our duty as a programmer that whenever we allocate memory dynamically, we should deallocate it as well by making our own Destructor.

/*
    Destructors are Opposite of Constructors, as they are called to deallocate the memory of the object.
    - By default, Destructors are automatically and implicitly called by the compiler, when the object goes out of scope.
    - They are used to delete the dynamically allocated memory & release the resources acquired by the object.

    But at the time when we initialized memory dynamically, then we have to deallocate it manually, by making our own Custom Destructor.
    Dynamically allocated memory can't be removed automatically from heap by destructor,
    as the destructor will remove the pointer to that heap memory, buy actually the memory will still be there in the heap.
    Causing MEMORY LEAK.

    Syntax:-
    -------
            ~class_name(){
                // Code to deallocate the memory.
            }

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

    Car(Car &original){
        price = original.price;
        wheels = new int;
        *wheels = *(original.wheels);
    }

    ~Car(){
        cout << "Deleting Objects!\n";
        if(wheels != NULL){
            delete wheels;
            wheels = NULL;
            
        }
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

