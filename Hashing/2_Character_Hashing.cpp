#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);    // To take input of string with spaces.
//  cin>>s;    -> To take input of string without spaces.
    
    int hashh[256] = {0};
    for(int i = 0; i < s.size(); i++){
        hashh[s[i]]++; 
    }
    
    int q;
    cout<<"Enter the number of Querries: ";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter the character you want to know, how much time it occurs in array: ";
        cin>>c;
        // Fetching result from hash table:-
        cout<<c<< " occurs "<<hashh[c]<<" times in the array!"<<endl;
    }
    return 0;
}