#include <bits/stdc++.h>
using namespace std;

int numberOfDigit(int n){
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n, int power){
    int org = n;
    int arm = 0;
    int temp = 0;
    while(n > 0){
        temp = pow((n%10), power);
        arm+=temp;
        n /= 10;
    }
    if(arm == org){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int power = numberOfDigit(num);


    if(isArmstrong(num, power)){
        cout << "The number is Armstrong Number!\n";
    }else{
        cout << "The number is Armstrong Number!\n";
    }
    return 0;
}