Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
  #include <stdio.h>

int main() {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);

    if (sp > cp)
        printf("Profit %.0f%%", ((sp - cp) / cp) * 100);
    else if (sp < cp)
        printf("Loss %.0f%%", ((cp - sp) / cp) * 100);
    else
        printf("No Profit No Loss");

    return 0;
}
