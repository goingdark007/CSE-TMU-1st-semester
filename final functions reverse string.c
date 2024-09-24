#include <stdio.h>
#include <string.h>

void revstr(char str1[50])
{

    int i, len,temp,end,count=0;
    char str2[50];
    while(str1[count]!='\0'){
    count++;
    }
    len = count;
    printf("%d",len);
    end = len-1;
    for (i = 0; i < len; i++)
    {

        str2[i] = str1[end];
        end--;

    }
    for(i=0;i<len;i++){
    str1[i] = str2[i];
    }
}

    int main()
    {
        char str[50];
        printf (" Enter the string: ");
        scanf("%s",&str);

        printf (" \n Before reversing the string: %s \n", str);


        revstr(str);
        printf (" After reversing the string: %s", str);
    }
