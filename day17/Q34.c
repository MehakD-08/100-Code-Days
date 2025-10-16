//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main() {
    int num, i, a = 1;
    printf("enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        a = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                a = 0;
                break;
            }
        }
    }
    if (a)
        printf("Prime\n");
    else
        printf("Not a prime\n");
    return 0;
}