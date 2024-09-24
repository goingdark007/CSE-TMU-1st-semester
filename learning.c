#include<stdio.h>
#include<time.h>
int isLeapYear(int year, int mon)
{
    int flag = 0;
    if (year % 100 == 0)
    {
            if (year % 400 == 0)
            {
                    if (mon == 2)
                    {
                            flag = 1;
                    }
            }
    }
    else if (year % 4 == 0)
    {
            if (mon == 2)
            {
                    flag = 1;
            }
    }
    return (flag);
}
int main(){
int days;
int DaysInMon[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
time_t ts;
struct tm*ct;
ts = time(NULL);
ct = localtime(&ts);
printf("%d/%d/%d\n",ct->tm_mday,ct->tm_mon+1,ct->tm_year + 1900);
if(isLeapYear(2020,3)){
    printf("lol");
}
return 0;
}
