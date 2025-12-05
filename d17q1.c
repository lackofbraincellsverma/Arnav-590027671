Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main() {
    int n, t, sum = 0;
    scanf("%d", &n);

    t = n;
    while (t > 0) {
        int d = t % 10;
        sum += d*d*d;
        t /= 10;
    }

    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
