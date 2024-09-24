#include <stdio.h>
int main ( ) {
double a,b;
scanf("%lf%lf",&a,&b);
if(a>b) {
printf("The number entered first is bigger than the other one.");
}
else {
printf("The number entered second is bigger than the first one.");
}
return 0;
}
