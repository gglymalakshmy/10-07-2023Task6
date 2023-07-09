// Count the Total Number of Words in a String
#include <stdio.h> 
void main() 
{ 
char s[25]; 
int i,count = 0; 
printf("Enter a string \n"); 
fgets(s,25, stdin);
 for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
return 0;
}