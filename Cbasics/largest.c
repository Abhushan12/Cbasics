#include<stdio.h>
int main(void)
{
    int a, b, c;
    printf(" Enter any Three Number: \n");
    scanf("%d %d %d", &a,&b,&c);

    if ( a>b && a>b )
    {
        printf(" the largest Number among three is %d",a);
    }
    else if ( b>a && b>c)
    {
        printf( " The Largest Number among three is %d",b);
    }
    else{
        printf( " The largest number among three is %d ",c);
    }
    return 0;
}