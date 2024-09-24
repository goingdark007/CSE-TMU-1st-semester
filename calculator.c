#include <stdio.h>
int main(){
char operation;
double n1,n2;
scanf("%lf\t",&n1);
scanf("%c",&operation);
scanf("%lf",&n2);
switch(operation){
case '+':
printf("%lf + %lf = %lf",n1,n2,n1+n2);
break;
case '-':
printf("%lf - %lf = %lf",n1,n2,n1-n2);
break;
case '*':
printf("%.1lf * %.1lf = %lf",n1,n2,n1*n2);
break;
case '/':
printf("%lf / %lf = %lf",n1,n2,n1/n2);
break;
default:
printf("Enter oprands incorrect");
}
return 0;
}
