// To find a character from the String Array
#include <stdio.h> 
void main() 
{ 
char s[25],ch; 
int i,flag= 0; 
printf("Enter a string \n"); 
fgets(s,25, stdin);
printf("Enter a character to find : ");
scanf("%c",&ch);
 for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ch)
        flag=1;
    }
    if(flag==1)
     printf("%c is found",ch);
         else 
            printf("%c is not found",ch);
}