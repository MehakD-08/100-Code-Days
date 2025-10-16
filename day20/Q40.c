//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
int main() {
    int num, temp, mask, bit;
    printf("Enter a binary number (as decimal input): ");
    scanf("%u", &num);
    temp = num;
    mask = 1;
    while (temp >>= 1) {
        mask <<= 1;
    }
    printf("1's complement: ");
    while (mask > 0) {
        bit = (num & mask) ? 0 : 1;
        printf("%u", bit);
        mask >>= 1;
    }
    return 0;
}