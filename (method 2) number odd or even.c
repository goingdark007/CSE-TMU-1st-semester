#include <stdio.h>
int main ( ) {
int a,b;
printf("Enter a number\n");
scanf("%d",&a);
b =a/2;
if (b*2==a) {
printf("The number is even. Thank you.");
}
else {
printf("The number is odd. Thank you.");
}
}
