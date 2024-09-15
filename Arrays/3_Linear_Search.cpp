#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int k, int size){
    for(int i=0;i<size;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main()
{
    int size = 7;
    int arr[] = {4,2,7,10,8,1,2,5};
    cout<<searchElement(arr, 8, size)<< endl;
    return 0;
}