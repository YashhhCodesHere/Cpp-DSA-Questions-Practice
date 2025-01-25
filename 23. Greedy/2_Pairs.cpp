#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main(){
    int start[] = {0,1,2};
    int end[] = {9,2,4};

    vector <pair<int, int> > pairs(3, make_pair(0, 0));
    
    for(int i = 0; i < pairs.size(); i++){
        pairs[i] = make_pair(start[i], end[i]);
        cout << "(" << pairs[i].first << ", " << pairs[i].second << ")" << "\n";
    }
    cout << "\n";

    // Sorting pair on the basis of 'second':-
    sort(pairs.begin(), pairs.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    // // Or we can use our own made compare function:-
    // sort(pairs.begin(), pairs.end(), compare);

    cout << "After sorting:\n";
    for(const auto &p : pairs){
        cout << "(" << p.first << ", " << p.second << ")" << "\n"; 
    }

    return 0;
}
