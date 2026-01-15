#include<stdio.h>
int main(){

    int a = 10, b=5, c=2, result;
    result = a*b+c/2;
    printf("result 1: %d\n", result);

    result = (a+b) * ( c/2 );
    printf("result 2 : %d\n",result);
    return 0;
}