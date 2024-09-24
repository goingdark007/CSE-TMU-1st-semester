#include<stdio.h>
int main(){
int i,j,sum = 0;
for(i=1;i<=5;i+=2){
    sum += (i*i);
}
for(j=2;j<=5;j+=2){
        sum += - (j*j);
    }
    printf("%d",sum);
return 0;
}
