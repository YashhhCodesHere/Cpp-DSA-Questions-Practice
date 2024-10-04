#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char arr[], int n){
    for(int i = 0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            return false;
        }
    }
    return true;
}

int main()
{
    char word[100] = "Eat an Apple Everyday... Keeps the Doctor away! ";
    int i = 0;
    while(word[i] != '\0'){
        cout<<word[i++]<<" ";
    }

    char arr[100];
    cout<<"\nEnter a word: ";   // Enter a word: Hello
    cin>>arr;   // Taking input from user
    cout<<"The word you entered is: "<<arr<<endl;

    // Check if the word is palindrome or not
    int size;
    cout<<"Enter the size of the character array: ";
    cin>>size;
    char palindrome[size+1];
    cout<<"Enter the word: ";
    cin>>palindrome;
    int result = checkPalindrome(palindrome, size);

    if(result){
        cout<<"The word is a palindrome."<<endl;
    }else{
        cout<<"The word is not a palindrome."<<endl;
    }

    return 0;
}