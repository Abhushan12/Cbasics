#include<stdio.h>

int main (){

    int x =5;

    int a = ++x;
    int b = x++;
    printf("%d %d %d \n", x, a,b);
    return 0;
}