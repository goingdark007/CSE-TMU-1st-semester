#include<stdio.h>
int main(){
int i,a,sum;
sum = 0;
for(i=1;i<=100;i++){
a = i*i;
sum += a;
}
printf("%d",sum);
return 0;
}
