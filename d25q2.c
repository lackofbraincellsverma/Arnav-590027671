Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
  #include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++)
            printf(" ");
        for (int star = 0; star < 5 - i; star++)
            printf("*");
        printf("\n");
    }
    return 0;
}
