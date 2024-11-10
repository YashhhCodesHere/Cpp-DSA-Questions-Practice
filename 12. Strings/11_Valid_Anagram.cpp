#include <bits/stdc++.h>
using namespace std;

// String is object NOT a data type, so hence we don't need to pass the size of the string to the function.
bool checkAnagram(string s1, string s2){
    if(s1.length() != s2.length()){
        cout << "NOT a valid Anagram!\n";
        return false;
    }
    int count[26] = {0};
    for(int i = 0; i < s1.length(); i++){
        count[s1[i] - 'a']++;
    }
    for(int i = 0; i < s2.length(); i++){
        if(count[s2[i] - 'a'] == 0){
            return false;
        }
        count[s2[i] - 'a']--;
    }
    return true;
}

int main()
{
    string s1 = "anagram";
    string s2 = "nagaram";
    cout << checkAnagram(s1, s2);
    return 0;
}