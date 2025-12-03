/* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */

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
    int i, j;
    int n = 9;  
    int mid = (n + 1) / 2;  
   
    for(i = 1; i <= mid; i++) {
        int stars = 2 * i - 1;  
        for(j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

   
    for(i = mid - 1; i >= 1; i--) {
        int stars = 2 * i - 1;  
        for(j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
