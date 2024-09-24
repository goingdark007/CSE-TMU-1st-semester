#include<stdio.h>
int main(){
int i,length,count=0;
char str[60];
scanf("%s",&str);
while(str[count]!='\0'){

    length = count+1;
    count++;
}
for(i=length-1;i>=0;i--){
    printf("%c",str[i]);
}

}
