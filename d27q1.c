Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int stars = 1;

    for (int i = 1; i <= 5; i++) {
        for (int s = 0; s < stars; s++)
            printf("*");
        printf("\n");
        stars += 2;
    }

    stars = 7;

    for (int i = 1; i <= 4; i++) {
        for (int s = 0; s < stars; s++)
            printf("*");
        printf("\n");
        stars -= 2;
    }

    return 0;
}
