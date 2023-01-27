
#include<stdio.h>
#include<string.h>

int main()
{
    // string  reverse

    char str1[10];
    printf("\n________using library function_______\n");
    printf("Enter string : ");
    scanf("%s",str1);

    printf("Orginal string : %s \n",str1);

    // using library function
    printf("\n________using library function_______\n");
    printf("string After Reverse : %s\n",strrev(str1));

    // without library function
     printf("\n________without library function________\n");
    char str2[10];
    printf("Enter string : ");
    scanf("%s",str2);
    printf("\nstring After Reverse : ");
    int len = strlen(str1);
    for(int i=len-1;i>=0;i--){
        printf("%c",str2[i]);
    }
  
}
