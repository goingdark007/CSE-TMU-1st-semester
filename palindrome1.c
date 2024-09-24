#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
int d = a;
for(;a>0;a/=10){
b = a%10;
c = (c*10) + b;
}
printf("%d\n",c);
if(c==d){
printf("%d is a palindrome number",c);
}
else{
printf("%d is not a palindrome number",c);
}
return 0;
}
