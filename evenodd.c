//even or odd in an array
#include <stdio.h>
int main()
{
  int array[100], n, c, d, swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
  {
    scanf("%d", &array[c]);
  }
  for (c = 0; c< n; c++)
  {
    if(array[c]%2==0)
    {
        printf("%d is even number\n",array[c]);
    }
    else
    {
        printf("%d is odd number\n", array[c]);
    }
}
return 0;
}