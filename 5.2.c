#include<stdio.h>
#include<conio.h>
void  main(){
 	 int number;
 	 clrscr();
 	printf("enter the value :");
 	scanf("%d",&number);
 	  if(number>0){
         	printf("positiv");
		}	else if (number<0){
            	printf("nagativ");
      	}else if (number == 0){
         	printf("Neutral");
		 }
		 getch();
 }	
 
