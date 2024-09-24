#include<stdio.h>
int main(){
int d,m,y,d2,m2,y2;
int DayInMon[] = {31,28,31,30,31,30,31,31,30,31,30,31,30,31};

printf("Enter the birth date in this format DD/MM/YYYY :\n");
scanf("%d/%d/%d",&d,&m,&y);
printf("Enter the current date in this format DD/MM/YYYY :\n");
scanf("%d/%d/%d",&d2,&m2,&y2);
d = DayInMon[m-1] - d;
if((y%100!=0)&&(y%4==0)||(y%400==0)){
    if(m==2){
        d = d + 1;
    }
}
d = d + d2;
m = (12-m) + (m2-1);
y = (y2) - y - 1;
if((y2%100!=0)&&(y2%4==0)||(y2%400==0)){
    if(m2==2){
    if(d>=(DayInMon[m2-1] + 1)){
        d = d - (DayInMon[m2-1] + 1);
        m = m + 1;
    }
    }
}
else if(d>=DayInMon[m2-1]){
    d = d - DayInMon[m2-1];
    m = m + 1;
}
if(m>=12){
    y = y +1;
    m = m - 12;
}
printf("\n## Hey you are  %d years %d months and %d days old. ##\n", y, m, d);
}
