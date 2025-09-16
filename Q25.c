//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main(){
    int a,b;
    char x;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter another integer: ");
    scanf("%d", &b);
    printf("Enter operator from(+,-,*,/,%): ");
    scanf(" %c", &x);
    switch(x){
    case '+':
    printf("%d", a+b);
    break;
    case '-':
    printf("%d", a-b);
    break;
    case '*':
    printf("%d", a*b);
    break;
    case '/':
    if(b==0){
        printf("Division by Zero");
    }
    else{
        printf("%d", a/b);
    }
    break;
    case '%':
    if(b==0){
        printf("Modulus by Zero");
    }
    else{
        printf("%d", a%b);
    }
    break;
    } 
    return 0;
}