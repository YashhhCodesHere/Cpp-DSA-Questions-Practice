#include <bits/stdc++.h>
using namespace std;

int countVowels(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    return count;
}

void swapString(string s1, string s2){
    if(s1.length() != s2.length()){
        cout << "Lengths are different!";
        return;
    }
    cout << s1 << " " << s2 << "\n";
    
    int count = 0;
    int idx[3] = {0};
    for(int i = 0, j = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]){
            idx[j++] = i;
            count++;
        }
        if(count > 2){
            cout << "SWAP NOT POSSIBLE";
            return;
        }
    }
    swap(s2[idx[0]], s2[idx[1]]);

    cout << s1 << " " << s2 << "\n";
}

int main()
{
    // 1.
    string s = "mallu";
    cout << "No. of vowels are: " << countVowels(s) << "\n";

    // 2. 
    string s1 = "bank";
    string s2 = "kanb";
    swapString(s1, s2);
    return 0;
}