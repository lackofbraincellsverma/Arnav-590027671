Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int spaces = 3, stars = 1;

    for (int i = 1; i <= 4; i++) {
        for (int s = 0; s < spaces; s++) printf(" ");
        for (int st = 0; st < stars; st++) printf("*");
        printf("\n");
        spaces--;
        stars += 2;
    }

    spaces = 1;
    stars = 5;

    for (int i = 1; i <= 3; i++) {
        for (int s = 0; s < spaces; s++) printf(" ");
        for (int st = 0; st < stars; st++) printf("*");
        printf("\n");
        spaces++;
        stars -= 2;
    }

    return 0;
}
