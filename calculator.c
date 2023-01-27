#include<stdio.h>

int main()
{

    int a ,b ,sum ,sub, mul ,div;

    printf("enter number 1 : ");

    scanf("%d" , &a);

    printf("enter number 2 : ");
    scanf("%d" , &b);

    sum =a+b;
    printf("\nAddtion of %d and %d is %d " , a,b,sum);

    sub = a-b;
    printf("\nsubtraction of %d and %d is %d " , a,b,sub);

    mul = a*b;
    printf("\nMUltiplication of %d and %d is %d " , a,b,mul);

    div= a/b;
    printf("\nDivision of %d and %d is %d " , a,b,div);


}

