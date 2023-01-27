#include<stdio.h>

void star(int i ,  int n)
{
    if(i==n){
        return;
    }
    for(int j =0;j<i;j++){
        printf("%c",'*');
    }
    printf("\n");

    star(i+1,n);
}

void main()
{
    star(1 ,5);
}