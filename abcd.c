#include<stdio.h>

int main()
{
    int ch;

    for(ch ='A';ch<='Z';ch++){
        printf("%c" , ch);
    }
    printf("\n");
    
    for(ch ='A';ch<='Z';ch++){
        putchar(ch);
    }
}