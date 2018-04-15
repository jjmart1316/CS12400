/* File Name: Homework7
 * Author: Juan Martinez
 * E-mail: mart1316@gmail.com
 * Description: Reverses a c-string
 */
#include <iostream>
using namespace std;

void reverseString(char *a);
//precondition: Takes a cstring by their location
//postcondition:: calls lastCharIndex() to locate the last character and reverses the string
int lastCharIndex(char *a);
//precondition: takes a cstring by their location
//postcondition: returns the index of the last typed character in the string

int main() {

    char str[101];

    cout << "Type something: ";
    cin.getline(str, 101);
    reverseString(str);

    cout << str;
    return 0;
}

int lastCharIndex(char *a) {
    int i = 0;
    while (a[i] != NULL) {
        i++;
    }
    return i;
}

void reverseString(char *a) {
    typedef char* charPointer;
    charPointer pStart, pEnd;

    pStart = a;
    pEnd = a + lastCharIndex(a) - 1;

    while(pStart < pEnd) {
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }
}
