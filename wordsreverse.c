#include<stdio.h>

int main()
{

    char  str[10] ;
    int len = sizeof(str)/sizeof(str[0]);
    for(int i =0;i<len;i++){
        scanf("%c",&str[i]);
    }
    for(int i =0;i<len;i++){
        printf("%c",str[i]);
    }

}