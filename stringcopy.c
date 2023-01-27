#include<stdio.h>
#include<string.h>

int main()
{   
    // copy string with library Function
     printf("________copy string with library Function______\n");
    char str1[100];
    printf("Enter String : ");
    scanf("%s",str1);
    char str2[100];

    int len = strlen(str1);
    strcpy(str2 , str1);
    printf("string After Copy into str2 : %s" , str2);
    printf("\n");

    //without library function
    printf("________copy string without library function_______\n");
    char str3[100];
    printf("Enter String : ");
    scanf("%s",str3);
    char str4[100];
    int i =0;
    while(str3[i]!='\0'){
        i++;
    }
    for(int j =0;j<i;j++){
        str4[j] = str3[j];
    }
    printf("String After copy Str4 : %s",str4);
}