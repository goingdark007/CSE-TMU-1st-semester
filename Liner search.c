#include<stdio.h>
int main(){
int a[5];
int i,j = 0,key;
printf("Enter key");
scanf("%d",&key);
for(i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<6;i++){
    if(a[i]==key){
        j++;
        break;
    }
}
if(j==1){
    printf("The key %d is in the array at %d index",key,i);
}
else{
    printf("The key %d is not in the array",key);
}
return 0;
}
