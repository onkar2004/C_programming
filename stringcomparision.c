#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10];
    printf("Enter String 1 : ");
    scanf("%s",str1);
    char str2[10];
    printf("Enter String 1 : ");
    scanf("%s",str2);

    int len = strlen(str1);

    // STRING COMPARE USING Library function
     printf("_________String compare not using library function________\n");
    if(strcmp(str1 , str2) == 0){
        printf("String_1 and String_2 is Equal\n");
    }
    
    else{
        printf("String_1 and String_2 is NOT Equal\n");
    }

    // STRING COMPARE NOT using Library function
    printf("______String compare not using library function______\n");
    int flag =0;
    for(int i =0;i<len;i++){
        if(str1[i] == str2[i]){
            flag = 0;
        }
        else{
            flag = 1;
        }
    }

    if(flag == 0){
        printf("String_1 and String_2 is Equal");
    }
    else{
        printf("String_1 and String_2 is NOT Equal");
    }

}