#include<stdio.h>
int main(){
int a[10];
int key,i,j=1,high,low,mid,c=0;
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
scanf("%d",&key);
while(a[j]!=0){
    j++;
}
printf("%d",j);
high = j-1;
printf("%d",high);
low = 0;
while(low<=high){
    mid = (low + high)/2;
    if(a[mid]==key){
        c = 1;
        break;
    }
    if(a[mid]<key){
       low = mid +1;
    }
else{
        high = mid -1;
    }
}
if(c==1){
    printf("The key %d is found at %d index in array",key,mid);
}
else{
    printf("The key %d is not found  in array",key);
}
return 0;
}
