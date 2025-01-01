#include <bits/stdc++.h>
using namespace std;

void printSubsets(string str, string subsets){
    if(str == ""){
        cout << "[" << subsets << "] ";
        return;
    }

    char ch = str[0];

    // YES:-
    printSubsets(str.substr(1, str.size()-1), subsets+ch);
    
    // NO:-
    printSubsets(str.substr(1, str.size()-1), subsets);
}

int main(){
    string str = "abc";
    string subset = "";
    
    cout << "All of the subsets of " << str << " are:- \n";
    printSubsets(str, subset);

    return 0;
}