#include<stdio.h>
#include<math.h>
int main(){
double a,b,TAN;
scanf("%lf%lf",&a,&b);
TAN = atan2(a,b);
printf("%lf\n",TAN);
}
