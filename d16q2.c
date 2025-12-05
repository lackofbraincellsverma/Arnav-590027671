Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int n, t, rev = 0;
    scanf("%d", &n);

    t = n;
    while (t > 0) {
        rev = rev * 10 + (t % 10);
        t /= 10;
    }

    if (rev == n)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
