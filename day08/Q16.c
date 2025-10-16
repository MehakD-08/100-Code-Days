//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    if(a>b){
        if(b>c){
            printf("Largest number: %d", a);
        }
        else{
            if(a>c){
                printf("Largest number: %d", a);
            }
            else{
                printf("Largest number: %d", c);
            }
        }
    }
    else{
        if(b>c){
            printf("Largest number: %d", b);
        }
        else{
            printf("Largest number: %d", c);
        }
    }
    return 0;
}
