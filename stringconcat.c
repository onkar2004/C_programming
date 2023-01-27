#include<stdio.h>
#include<string.h>

int main()
{   
    // concat string using library functions
    printf("_______concat string using library functions method________\n");
    char str1[100];
    printf("Enter String 1 : ");
    scanf("%s",str1);
    char str2[200];
    printf("Enter String 2 : ");
    scanf("%s",str2);

    strcat(str1,str2);
    printf("String After concatination : %s",str1);

    // concat string using general method
    printf("\n_______concat string using general method________\n");
      char str3[100] ,str4[100] ;
      printf("Enter string : ");
    scanf("%s",str3);
    printf("Enter string : ");
    scanf("%s",str4);
   
    // Declare a new Strings
    // to store the concatenated String
    char str5[100];
   
    int i = 0, j = 0;
   
    // Insert the first string
    // in the new string
    while (str3[i] != '\0') {
        str5[j] = str3[i];
        i++;
        j++;
    }
   
    // Insert the second string
    // in the new string
    i = 0;
    while (str4[i] != '\0') {
        str5[j] = str4[i];
        i++;
        j++;
    }
    str5[j] = '\0';
   
    // Print the concatenated string
    printf("\nConcatenated string: %s", str5);
   
    return 0;

}