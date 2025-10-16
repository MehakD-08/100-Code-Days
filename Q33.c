//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
int main() {
    int num, a, sum = 0, digit, count = 0, power, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    a = num;
    temp = num;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == a)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
