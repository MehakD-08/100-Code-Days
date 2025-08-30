/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main()
{
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    float f=(c*1.8)+32;
    printf("The temperature in Fahrenheit is: %f", f);
    
    return 0;
}
