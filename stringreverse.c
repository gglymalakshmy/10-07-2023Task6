// string reverse without using string library
#include <stdio.h> 
#include <string.h> 
void main() 
{ 
char string[25], reverse_string[25] = {'\0'}; 
int i, length = 0, flag = 0; 
printf("Enter a string \n"); 
fgets(string,25, stdin);
for (i = 0; string[i] != '\0'; i++) 
{ 
length++; 
} 
for (i = length - 1; i >= 0; i--) 
{ 
reverse_string[length - i - 1] = string[i]; 
}
printf("%s is the reversed string \n", reverse_string);
}
