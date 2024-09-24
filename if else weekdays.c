#include<stdio.h>
int main (){
int a,b;
scanf("%d",&a);
if(a<7){
printf("There are no weekdays");
}
else{
b = a/7;
printf("There are %d weekdays",b);
}
return 0;
}
