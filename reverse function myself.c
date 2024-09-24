#include <stdio.h>  
#include <string.h>  
  
void revstr(char str1[50])  
{  
    
    int i, len,temp,end;
    char str2[50];  
    len = strlen(str1);
    printf("%d",len);
    end = len -1;
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
        gets(str); 
          
        printf (" \n Before reversing the string: %s \n", str);  
          
        
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }  