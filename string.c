#include<stdio.h>

int main()
{   
    int i =0;
    char str[6]= "hello";
    char t[6];

    for(i =0;i<=6;i++){
      t[i] = str[i]; 
    }
    t[i] ='\0';
    printf("%s",t);

    char *ptr = "hello";

    printf("\n%.3s",ptr);

    puts(ptr);
}