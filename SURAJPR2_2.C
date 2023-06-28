// Q2 write a program to input electricity unit charges and calculate the total electricity bill according to the given condition:

#include<stdio.h>
#include<conio.h>

void main(){
float units,totalamount;
float bill,u,i;

clrscr();
printf("--------------------------------------------------------------\n");
printf("<<<<<<< ELECTRICITY BILL >>>>>>>>>>\n");
printf("-------------------------------------------------------------\n");

printf("-----------------------");
printf("enter electricity units");
printf("------------------------\n");
scanf("%f",&units);
u = units;
while (true){

   if (units <= 50) {
	bill = units * 0.5;
	continue;

   } else if (units <= 150) {
	bill = 50 * 0.5 + (units - 50) * 0.75;
	continue;
   } else if (units <= 250) {
	bill = 50 * 0.5 + 100 * 0.75 + (units - 150) * 1.2;
	continue;
   } else if (units > 250) {
	bill = 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (units - 250) * 1.5;
	bill = bill + bill * 0.2;
	break;
}
}

printf("answer %f",bill);

getch();
}