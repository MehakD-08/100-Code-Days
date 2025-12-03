/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int i, j;
    int totalGroups = 5;  

    for(i = 1; i <= totalGroups; i++) {
        int stars;

        
        if(i == 1 || i == 5)
            stars = 1;
        else if(i == 2 || i == 4)
            stars = 3;
        else if(i == 3)
            stars = 5;

        for(j = 0; j < stars; j++) {
            printf("*\n");
        }

        printf("\n");  
    }

    return 0;
}
