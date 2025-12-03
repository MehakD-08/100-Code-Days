/* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main() {
    int i, j;
    int n = 7;
    int mid = (n + 1) / 2;

    for(i = 1; i <= mid; i++) {
        for(j = 1; j <= mid - i; j++)
            printf(" ");
        for(j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    for(i = mid - 1; i >= 1; i--) {
        for(j = 1; j <= mid - i; j++)
            printf(" ");
        for(j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
