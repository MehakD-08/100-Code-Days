//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter side length 'a' of triangle ABC: ");
    scanf("%d", &a);
    printf("Enter side length 'b' of triangle ABC: ");
    scanf("%d", &b);
    printf("Enter side length 'c' of triangle ABC: ");
    scanf("%d", &c);
    if(a==b){
        if(a==c){
            printf("Equilateral Triangle");
        }
        else{
            printf("Isosceles Triangle");
        }
    }
    else if(b==c){
        printf("Isosceles Triangle");
    }
    else if(a==c){
        printf("Isosceles Triangle");
    }
    else{
        printf("Scalene Triangle");
    }
    return 0;
}
