#include <bits/stdc++.h>
#include <cmath>
#define PI 3.14
using namespace std;

int main()
{
    // 1. 
    int side;
    cout << "Enter the size of side of the square: ";
    cin >> side;
    int area = (side * side);
    cout << "The area of the square is: " << area << " sq. unit\n";

    // 2. 
    float pencil, pen, eraser, totalPrice;
    cout << "Enter the cost of pen: ";
    cin >> pen;
    cout << "Enter the cost of pencil: ";
    cin >> pencil;
    cout << "Enter the cost of eraser: ";
    cin >> eraser;

    totalPrice = (pencil + pen + eraser);
    float gst = 0.18 * totalPrice;

    cout << "Total bill amount: " << totalPrice << ". Gst amount is: " << gst << "\n";
    cout << "Bill including GST is: " << (totalPrice + gst) << "\n";

    // 3. 
    float principal, rate, time;
    cout << "Enter the Principle Amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the Time period: ";
    cin >> time;

    float SI = (principal * rate * time) / 100;
    cout << "The Simple Interest is: " << SI << "\n";
    cout << "Total Amount left is: " << (principal + SI) << "\n";

    // 4. 
    float radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * (pow(radius, 2));
    cout << "The area of the circle is: " << area << " sq.unit\n";

    // 5.
    float principal, rate, time;
    cout << "Enter the Principle Amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the Time period: ";
    cin >> time;

    float compoundInterest = (principal * pow((1+(rate/100)), time)) - principal;
    cout << "The compound interest is: " << compoundInterest << "\n";
    
    return 0;
}