#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
switch(a/10){
case 9:
printf("A Grade");
break;
case 8:
printf("B Grade");
break;
case 7:
printf("C Grade");
break;
case 6:
printf("D Grade");
break;
case 5:
printf("E Grade");
break;
default:
printf("F Grade");
}
}
