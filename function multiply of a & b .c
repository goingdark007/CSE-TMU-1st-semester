#include<stdio.h>
int multiply(int x,int y){
int z = x*y;
return z;
}
int main(){
int a,b;
scanf("%d%d",&a,&b);
int c = multiply(a,b);
printf("%d",c);
return 0;
}
