#include<stdio.h>
int main ( ) {
double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);
if(a<b&&a<c) {
printf("A is minimum");
}
else if(b<a&&b<c){
printf("B is the minimum");
}
else {
printf("C is the minimum");
}
return 0;
}
