#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter the number: ");
scanf("%d",&a);
d = a;
for(;a>0;a/=10){
    b = a % 10;
    c = c*10 + b;
}
if(d==c){
    printf("The number %d is a palindrome number",d);
}
else{
     printf("The number %d is not a palindrome number",d);
}
return 0;
}
