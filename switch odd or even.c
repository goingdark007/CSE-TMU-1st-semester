#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
switch(a%2==0){
case 1:
printf("%d The number is even",a);
break;
case 0:
printf("%d The number is odd",a);
}
}
