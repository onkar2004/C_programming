#include<stdio.h>

int main()
{
    int num,first,last,sum=0;
    printf("Only enter fourth digit number : ");
    scanf("%d",&num);

   
    

    last =  num%10;
    num = num /1000;
    first = num % 10;

    sum = first + last;

    printf("%d",sum);
    
}