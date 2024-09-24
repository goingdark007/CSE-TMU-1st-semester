#include<stdio.h>
int main (){
double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);
if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b)){
printf("It's a triangle'");
}
else{
printf("It's not a triangle'");
}
return 0;
}
