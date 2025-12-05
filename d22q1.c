Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int n, t, sum = 0;
    scanf("%d", &n);

    t = n;

    while (t > 0) {
        int d = t % 10;

        int f = 1;
        for (int i = 1; i <= d; i++)
            f *= i;

        sum += f;
        t /= 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
