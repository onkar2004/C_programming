#include<stdio.h>

void main()
{
    int num ;
    printf("enter number : ");
    scanf("%d",&num);

    printf("Table of Given Number is : \n");
    for(int i=1;i<=10;i++){
        printf("%d" ,num*i);
        printf("\n");
    }
}