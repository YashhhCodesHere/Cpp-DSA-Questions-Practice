#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int palindrome = 0;
        if(x<0){
            return false;
        }
        while(x>0){
            int pop = x%10;
            if(palindrome >(INT_MAX - pop) / 10){
                return false;
            }
            palindrome = palindrome*10 + pop;
            x/=10;
        }
        return original == palindrome;
    }
};
int main()
{
    Solution s;
    cout<<s.isPalindrome(121)<<endl;
    return 0;
}