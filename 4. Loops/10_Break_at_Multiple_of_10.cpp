#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while(true){
        cout << "Enter num: ";
        cin >> num;
        if(num % 10 == 0){
            cout << "The number is multiple of 10!\nGetting out of the loop!\n";
            break;
        }
    }
    return 0;
}