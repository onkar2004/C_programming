#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter String : ");
    scanf("%s",str);

    // STRING LENGTH USING LIBRARY FUNCTION
    printf("string length using library function is : %d",strlen(str));
    printf("\n");

    // STRING LENGTH USING LIBRARY FUNCTION
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("string length using  general Method is : %d",count);
}