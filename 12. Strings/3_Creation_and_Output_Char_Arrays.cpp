#include <bits/stdc++.h>
using namespace std;

int main()
{
    //1.
    char work[] = "CODE";  // Here, individual characters are stored in the array with a NULL character at the end. 
    cout << work << "\n";  // Size of the array is automatically calculated, hence we don't need to specify the size of the 'work' array.
    //2.
    char work1[5] = "CODE";   // Size must be n+1, where n is the number of characters in the string.
    // 3.
    char work2[] = {'C', 'O', 'D', 'E', '\0'};  
    //4.
    char work3[50] = {'C', 'O', 'D', 'E', '\0'};   // Here size is 50 but only 5 characters are stored and other 45 characters are NULL.
    //5.
    char work4[50] = {'C', 'O', 'D', 'E'};   // Here size is 50 but only 4 characters are stored and other 46 characters are garbage values.

    cout << strlen(work3) << "\n";  // 4 -> \0 is not counted in the length of the string.
    return 0;
}