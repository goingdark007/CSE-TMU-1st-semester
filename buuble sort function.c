#include<stdio.h>
void sort(int a[]){
int i,j,temp;

for(i=0;i<10;i++){
    for(j=i + 1;j<10;j++){
        if(a[i]>a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    }
}


}
int main(){
int a[10];
int i;
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
sort(a);
for(i=0;i<10;i++){
    printf("%d",a[i]);
}
return 0;
}
