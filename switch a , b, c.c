#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
switch((a>b)&(a>c)){
case 1:
printf("A is the largest one");
break;
case 0:
switch((b>c)){
case 1:
printf("B is the largest one");
break;
case 0:
printf("C is the largest one");
}
}
}
