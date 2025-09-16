/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include<stdio.h>
int main() {
   int i;
   printf("Enter units consumed: ");
   scanf("%d", &i);
   if(i<=100){
    int bill=5*i;
    printf("Bill: Rs.%d", bill);
   }
   else if(i>100 && i<=200){
    int bill1=7*i;
    printf("Bill: Rs.%d", bill1);
   }
   else if(i>200 && i<=300){
    int bill2=10*i;
    printf("Bill: Rs.%d", bill2);
   }
   else if(i>300){
    int bill3=12*i;
    printf("Bill: Rs.%d", bill3);
   }
   return 0;
}