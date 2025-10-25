//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
int main() {
    int num, n, first, last, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    last = n % 10;
    while (n >= 10) {
        n /= 10;
        count++;
    }
    first = n;
    int divisor = 1;
    for (int i = 0; i < count; i++) {
        divisor *= 10;
    }
    temp = num % divisor;         
    temp = temp / 10;             
    int result = last * divisor + temp * 10 + first;
    printf("%d\n", result);
    return 0;
}
