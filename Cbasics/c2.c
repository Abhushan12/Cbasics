#include<stdio.h>
int main()
{
   int a, b , sum,diff,multi,quo;
   scanf("%d %d", &a, &b);
   printf( " enter any two number for sum difference multiplication and division");
 sum = a+b;
 diff = a-b;
 multi = a*b;
 quo = a/b;
printf(" sum= %d \n diff =%d \n multi = %d , quo= %d ",sum,diff, multi, quo);

return 0;

}