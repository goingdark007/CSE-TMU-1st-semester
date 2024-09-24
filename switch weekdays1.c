#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
switch((a/7)){
case 0:
printf("There are no weekdays");
break;
case 1:
printf("There is one weekday");
break;
case 2:
printf("There is two weekdays");
break;
case 3:
printf("There is three weekdays");
break;
case 4:
printf("There is four weekdays");
break;
case 5:
printf("There is five weekdays");
break;
case 6:
printf("There is six weekdays");
break;
case 7:
printf("There is seven weekdays");
break;
case 8:
printf("There is eight weekdays");
break;
}
return 0;
}
