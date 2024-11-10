#include<iostream>
#include<cstring>
using namespace std;

/*
    cString Functions:-
    1. strcpy(dest, src) -> Copies the string from source to destination.
    2. strcat(dest, src) -> Concatenates the string from source to destination.
    3. strcmp(str1, str2) -> Compares the two strings on the basis of ASCII values of initial characters (NOT on the basis of length).
    4. strlen(str) -> Returns the length of the string.
    5. strchr(str, ch) -> Returns the first occurrence of the character in the string.
    6. strstr(str1, str2) -> Returns the first occurrence of the string in the string.
    7. strrev(str) -> Reverses the string.
    8. strlwr(str) -> Converts the string to lowercase.
    9. strupr(str) -> Converts the string to uppercase.
*/
int main(){
    //1. strcpy(dest, src):-
    char dest[100];
    char src[100] = "Hello World!";
    strcpy(dest, src);   // We use this function when we want to store the string in another string.
    cout << dest << "\n";

    //2. strcat(dest, src):-
    char str1[] = "Hello ";
    char str2[] = "World!";
    cout << "Length of str1 before concatenation: " << strlen(str1) << "\n";
    strcat(str1, str2); // This will concatenate both strings into str1 & str2 will remain same.
    cout << "Length of str1 after concatenation: " << strlen(str1) << "\n";

    //3. strcmp(str1, str2):-
    char str3[] = "Hello";
    char str4[] = "Hello";
    if(strcmp(str3, str4) == 0){    // If both strings are same then it will return 0.
        cout << "Both strings are same.\n";
    }else{
        cout << "Both strings are different.\n";
    }
    char str5[] = "Mango";
    char str6[] = "Apple";
    cout << strcmp(str5, str6) << "\n"; // Here 1st char of str5 i.e., 'M' is greater than 1st char of str6 i.e., 'A' so it will return a positive value.
    cout << strcmp(str6, str5) << "\n"; // Here 1st char of str6 i.e., 'A' is smaller than 1st char of str5 i.e., 'M' so it will return a negative value.

    return 0;
}