//Q1 write a program to check wether a number is even or odd using the ternary operator.
#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
(a % 2 == 0)?
   printf("The number is odd.")
  :printf("The number is even.");
getch();
}