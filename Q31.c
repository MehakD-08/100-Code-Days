//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>
int main() {
    int num, temp, bit, mask;
    printf("enter a positive integer: ");
    scanf("%d", &num);
    mask = 1;
    temp = num;
    while (temp >>= 1) {
        mask <<= 1;
    }
    while (mask > 0) {
        bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
        mask >>= 1;
    }

    return 0;
}