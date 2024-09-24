#include<stdio.h>
int main ( ) {
double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);
if(a>b) {
if(a>c) {
printf("A is maximum");
}
}
else if(b>a){
if(b>c){
printf("B is the maximum");
}
else {
printf("C is the maximum");
}
}
return 0;
}
