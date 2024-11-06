#include <bits/stdc++.h>
using namespace std;

int trap(int *heights, int n){
    int leftMax[100], rightMax[100];
    leftMax[0] = 0;
    rightMax[n-1] = 0;

    for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    }
    for(int i = n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
    }

    int waterTrapped = 0;
    for(int i = 1; i < n - 1; i++){
        waterTrapped += max(0, (min(leftMax[i], rightMax[i]) - heights[i])); 
    }

    return waterTrapped;
}

int main()
{
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(heights[0]);

    cout << "Total Water Trapped is: " << trap(heights, n) << "\n";
    return 0;
}
