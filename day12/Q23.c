/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main() {
   int i;
   printf("Enter the no. of days book is overdue: ");
   scanf("%d", &i);
   if(i<=5){
    int fine=2*i;
    printf("Fine Rs.%d", fine);
   }
   else if(i>5 && i<=10){
    int fine1=4*i;
    printf("Fine Rs.%d", fine1);
   }
   else if(i>10 && i<=30){
    int fine2=6*i;
    printf("Fine Rs.%d", fine2);
   }
   else if(i>30){
    printf("Membership Cancelled");
   }
   return 0;
}
