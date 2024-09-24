#include<stdio.h>

int main(){
int d1,d2,m1,m2,y1,y2,r1,r2,r3,r4,r5,r6,r7,r8;
printf("Enter date of birth\n");
scanf("%d",&d1);
printf("Enter month of birth\n");
scanf("%d",&m1);
printf("Enter year of birth\n");
scanf("%d",&y1);
printf("Enter the current date\n");
scanf("%d",&d2);
printf("Enter the current month\n");
scanf("%d",&m2);
printf("Enter the current year\n");
scanf("%d",&y2);
if(d2>=d1){
if(m2>=m1){
r3 = y2 - y1;
r2 = m2 - m1;
r1 = d2 - d1;
}
else{
r3 = y2 - y1;
r3 = r3 - 1;
m2 = m2 + 12;
r2 = m2 - m1;
r1 = d2 - d1;
}
}
else{
if(m2>=m1){
r3 = y2 - y1;
r2 = m2 - m1;
r2 = r2 - 1;
d2 = d2 + 30;
r1 = d2 - d1;
}
else{
r3 = y2 - y1;
r3 = r3 - 1;
m2 = m2 + 12;
r2 = m2 - m1;
r2 = r2 - 1;
d2 = d2 + 30;
r1 = d2 - d1;
}
}
r4 = (r3*12) + r2;
r6 = ((r3*365) + (r2*30) + r1)/7;
r5 = (r3*365) + (r2*30) + r1;
r7 = r5*24;
r8 = r7*60;
printf("your age is %d years %d months and %d days\nor %d months and %d days\nor %d weeks\nor %d days\nor %d hours\nor %d minutes",r3,r2,r1,r4,r1,r6,r5,r7,r8);
return 0;
}
