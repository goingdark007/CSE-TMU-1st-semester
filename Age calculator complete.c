#include<stdio.h>
#include<time.h>
int main(){
int d,m,y;
int DayInMon[] = {31,28,31,30,31,30,31,31,30,31,30,31};
time_t ts;
struct tm*ct;
printf("Enter the birth date in this format DD/MM/YYYY :\n");
scanf("%d/%d/%d",&d,&m,&y);
ts = time(NULL);
ct = localtime(&ts);
printf("Current DD/MM/YYYY :%d/%d/%d",ct->tm_mday,ct->tm_mon + 1,ct->tm_year + 1900);
d = DayInMon[m-1] - d;
if((y%100!=0)&&(y%4==0)||(y%400==0)){
    if(m==2){
        d = d + 1;
    }
}
d = d + ct->tm_mday;
m = (12-m) + ct->tm_mon;
y = (ct->tm_year + 1900) - y - 1;
if(((ct->tm_year + 1900)%100!=0)&&((ct->tm_year + 1900)%4==0)||((ct->tm_year + 1900)%400==0)){
    if((ct->tm_mon) + 1==2){
    if(d>=(DayInMon[ct->tm_mon] + 1)){
        d = d - (DayInMon[ct->tm_mon] + 1);
        m = m + 1;
    }
    }
}
else if(d>=DayInMon[ct->tm_mon]){
    d = d - DayInMon[ct->tm_mon];
    m = m + 1;
}
if(m>=12){
    y = y +1;
    m = m - 12;
}
printf("\n## Hey you are  %d years %d months and %d days old. ##\n", y, m, d);
}
