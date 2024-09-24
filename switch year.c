#include<stdio.h>
int main(){
int year;
scanf("%d",&year);
switch((year%400==0)||(year%4==0)&(year%100!=0)){
case 1:
printf("%d is a leap year",year);
break;
case 0:
printf("%d is not a leap year",year);
}
}


