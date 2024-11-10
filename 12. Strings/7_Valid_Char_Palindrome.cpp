#include <bits/stdc++.h>
using namespace std;

void lowerCase(char word[], int n){
    for (int i = 0; i < n; i++){ 
        if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] += 32;
        }
    }
    // cout << "The Lowercase of the word is: " << word << "\n";
}

void checkPalindrome(char *arr, int n){
    lowerCase(arr, n);
    cout << "Your given input string is: ";
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[n-i-1]){
            cout << "NOT Palindrome!\n";
            return;
        }
    }
    cout << "Palindrome!\n";
}

int main(){
    char word[] = "Racecar";
    int n = strlen(word);

    checkPalindrome(word, n);
    return 0;
}