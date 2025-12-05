Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int n, temp, first, last, pow10 = 1;
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        pow10 *= 10;
    }
    first = temp;

    int middle = n % pow10;      // remove first digit
    middle /= 10;                // remove last digit

    int result = last * pow10 + middle * 10 + first;

    printf("%d", result);
    return 0;
}
