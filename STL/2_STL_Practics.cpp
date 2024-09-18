#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main()
{
    pair<int,int> p = {3,5};
    cout << p.first<<"\n";

    //Nested Pair:-
    pair<int, pair<int,int>> nested_pair = {1, {4,5}};
    cout<< nested_pair.second.first;

    // Array in the form of Pairs:-
    pair<int, int> arr[] = {{1,2}, {2,4}, {4,8}};
    cout<< arr[1].second;
    return 0;
}