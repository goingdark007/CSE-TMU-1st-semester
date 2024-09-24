#include<stdio.h>
int main(){
int a,b,c,e,f,g,h,i,j,k,l,m;
printf("Enter the year, month and day of birth\n");
scanf("%d%d%d",&a,&b,&j);
c = 738395;
e = a*365;
k = b*30;
i = e + k + j;
f = c - i;
g = f/365;
h = f%365;
l = h/30;
m = h%30;
printf("%d\n %d year %d month %d days",h,g,l,m);
return 0;
}
