#include <bits/stdc++.h>
using namespace std;

void reverse(char *arr, int n){
    for(int i = 0; i < n / 2; i++){
        swap(arr[i], arr[n-i-1]);
    }
    cout << "Reversed string is: " << arr << "\n";
}

int main()
{
    char word[] = "Hello";
    int n = strlen(word);
    reverse(word, n);
    return 0;
}