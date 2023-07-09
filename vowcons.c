//count the total number of vowels and consonants in a string
#include<stdio.h> 
int main(){ 
char line[15]; 
int i,v,c,ch,d,s,o; 
o=v=c=0; 
printf("Enter a line of string:\n"); 
fgets(line,15, stdin);
for(i=0;line[i]!='\0';i++) 
{
if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U') 
v++; 
else 
c++; 
}
printf("Vowels: %d",v); 
printf("\nConsonants: %d",c-1); 
return 0; 
}
