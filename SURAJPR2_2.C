// Q2 write a program to input electricity unit charges and calculate the total electricity bill according to the given condition:

#include<stdio.h>
#include<conio.h>

void main(){
float units,totalamount;
float bill,u,i;

clrscr();
printf("--------------------------------------------------------------\n");
printf("<<<<<<<<<<<<<<<<<<<< ELECTRICITY BILL >>>>>>>>>>>>>>>>>>>>>>>>\n");
printf("--------------------------------------------------------------\n");

printf("CHARGES OF PER UNIT");
printf("For the first 50 units Rs. 0.50/unit\n")
printf("For the next 100 units Rs. 0.75/unit\n")
printf("For the next 100 units Rs. 1.20/unit\n");
printf("For units above 250 Rs. 1.50/unit\n");

printf("ENTER YOUR ELECTRICITY UNITS:");
scanf("%f",&bill);
printf("\n");

if(bill<=50){
   a=(bill*0.50);
                          
       }else if(bill<=150){
         a=(25 + (bill - 50)*0.75);
                                
       }else if(bill<=250){
         a=(25 + 75 +(bill-150)*1.20);
                                
       }else{
         a=(25 + 75 + 120 + (bill - 250 )*1.50);
       }

f =a +a*0.2 ;    
printf(   "Electricity Bill = Rs.  %.1f",f);
return 0;
getch();    
}

/*Input : Enter electricity units: 435
Output : Electricity Bill = Rs. 597.0
*/
