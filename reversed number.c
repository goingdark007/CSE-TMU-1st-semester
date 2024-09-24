#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the number : ");
scanf("%d",&a);
for(;a>0;a/=10){
    b = a % 10;
    c = c*10 + b;
}
printf("Reversed number : %d",c);
return 0;
}
