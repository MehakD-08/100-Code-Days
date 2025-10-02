//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main(){
    int n, product=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("(");
    for(int i=1; i<=n; i++){
        product*=i;
        if(i==n){
          printf("%d ", i);
        }
        else{
            printf("%d * ", i);
        }
        
    }
    printf("= %d)", product);
    return 0;
}