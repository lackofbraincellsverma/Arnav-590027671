Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    char b[50];
    scanf("%s", b);

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0') printf("1");
        else             printf("0");
    }

    return 0;
}
