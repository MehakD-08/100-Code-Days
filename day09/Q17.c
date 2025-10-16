//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c;
    printf("Quadratic Equation: ax² + bx + c = 0\n");
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);
    float x=(b*b)-4*a*c;
    float y=(-b+sqrt(x))/(2*a);
    float z=(-b-sqrt(x))/(2*a);
    if(x>0){
        printf("Real and distinct roots: %.2f, %.2f", y, z);
    }
    else if(x==0){
        printf("Real and equal roots: %.2f", y);
    }
    else{
        printf("Complex roots");
    }
    return 0;

}
