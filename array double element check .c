#include<stdio.h>
int main (){
int a[5],b,i,j,count=1;
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(a[i]==a[j]){
            b = a[i];
            count++;
            break;
        }
    }
}
if(count>1){
printf("\n%d is repeated ",b);
printf("%d times",count);
}
return 0;
}
