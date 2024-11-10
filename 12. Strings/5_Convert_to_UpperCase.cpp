#include <bits/stdc++.h>
using namespace std; 

/*
    CONVERT TO:-
    Uppercase -> word[i] - 32
    Lowercase -> word[i] + 32
*/

void upperCase(char word[], int n){
    for (int i = 0; i < n; i++){ 
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }else{
            word[i] = ch - 'a' + 'A';
        } 
    }
    cout << "The Uppercase of the word is: " << word << "\n";
}

void lowerCase(char word[], int n){
    for (int i = 0; i < n; i++){ 
        if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] += 32;
        }
    }
    cout << "The Lowercase of the word is: " << word << "\n";
}
int main()
{
    char word[] = "ApPLe";
    upperCase(word, strlen(word));
    lowerCase(word, strlen(word));

    return 0;
}