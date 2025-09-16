//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>
int main(){
    float cp, sp;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if(sp>cp){
        float profit=sp-cp;
        float p=(profit/cp)*100;
        printf("Profit: %.2f%%", p);
    }
    else if(sp==cp){
       printf("No profit No Loss");
    }
    else{
        float loss=cp-sp;
        float l=(loss/cp)*100;
        printf("Loss: %.2f%%", l);
    }
    return 0;
}