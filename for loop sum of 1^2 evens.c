#include<stdio.h>
int main(){
int i,j,a,sum;
scanf("%d",&j);
sum = 0;
for(i=2;i<=j;i+=2){
a = i*i;
sum += a;
}
printf("%d",sum);
return 0;
}
