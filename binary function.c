#include<stdio.h>
int binary(int a[],int x,int high){
int mid,low = 0;
while(low<=high){
    mid = (low + high)/2;
    if(a[mid]==x){
        return mid;
    }
    if(a[mid]<x){
       low = mid +1;
    }
else{
        high = mid -1;
    }
}
return -1;
}

int main(){
int a[10];
int  key,n,search,i;
scanf("%d",&key);
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
n = sizeof(a)/sizeof(a[0]);
n = n - 1;
search = binary(a,key,n);
if(search!= -1){
    printf("The  key %d is found in %d index in array",key,search);
}
    else{
        printf("The key %d is not found in  array",key);
    }

return 0;
}
