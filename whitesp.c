// to remove all the white spaces from a string
#include <stdio.h> 
void main() 
{ 
char string[25]; 
int i,j,length = 0; 
printf("Enter a string \n"); 
fgets(string,25, stdin);
for (i = 0; string[i] != '\0'; i++) 
{ 
length++; 
} 
//printf("length=%d",length);
  for(i = 0; i < length; i++){  
        if(string[i] == ' '){  
            for(j=i;j<length;j++)  
        {  
            string[j]=string[j+1];  
        }  
        length--;  
        }  
    }  
    printf("\nString after removing all the white spaces : %s", string);  
    return 0;  
}  
