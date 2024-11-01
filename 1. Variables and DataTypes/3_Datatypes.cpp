#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float pi = 3.14159265359;
    double pi2 = 3.14159265359;

    cout << setprecision(12) << "The value of pi is: " << pi << endl;
    cout << setprecision(12) << "The value of pi2 is: " << pi2 << endl;

    cout << "The value of int is: " << sizeof(int) << "-byte" << endl;
    cout << "The size of float is: " << sizeof(float) << "-byte\n";
    cout << "The size of bool is: " << sizeof(bool) << "-byte\n";
    cout << "The size of char is: " << sizeof(char) << "-byte\n";
    cout << "The size of double is: " << sizeof(double) << "-byte\n";
    cout << "The size of long long is: " << sizeof(long) << "-byte\n";
    return 0;
}

// In boolean data type, 1 is considered as true and 0 is considered as false. It depends upon bits allocated to the data type.
// If last bit of the boolean data type is 1, then it is considered as true. If last bit is 0, then it is considered as false.

// Float is the data type used to store decimal values. It is a single precision floating point number.
// Float store 6 decimal digits of precision, while double can store 15 decimal digits of precision.