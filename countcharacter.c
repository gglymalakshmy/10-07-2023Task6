//Count the Total Number of Characters in a String
#include <stdio.h> 
#include<string.h>
int main()
{ 
    char name[30]; 
    int count=0;
    printf("Enter name: "); 
    scanf("%s",name);
    for(int i = 0; i < strlen(name); i++) {  
        if(name[i] != ' ')  
            count++;  
    }  
    printf("Count : %d",count); 
    return 0; 
}