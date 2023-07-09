//matrix addition
#include <stdio.h>
 
int main()
{
   int m, n,p,q,i,j, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of 1st matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < m; i++)
      for (j = 0; j< n; j++)
         scanf("%d", &first[i][j]);
printf("Enter the number of rows and columns of 2nd matrix\n");
   scanf("%d%d", &p, &q);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i< p; i++)
      for (j = 0 ; j < q; j++)
         scanf("%d", &second[i][j]);
if((m==p)&&(n==q))
{
   
   printf("Sum of entered matrices:-\n");
   
   for (i = 0; i < m; i++) 
    {
      for (j = 0 ; j < n; j++) 
     {
         sum[i][j] = first[i][j] + second[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
}
else
 {
printf("Addition not possible \n");
}
   return 0;
}