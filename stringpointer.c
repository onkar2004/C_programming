#include<stdio.h>

int main()
{   int n;
    printf("Enetr the limit of inch array : ");
    scanf("%d" , &n);
    char inch[n];
    char temp;
    for(int i =1;i<=n;i++){     // if n == 5 ; then print only 4 char bcos one place is for null char.
        scanf("%c" , &temp);
        inch[i] = temp;
    }

    for(int i =1;i<=n;i++){
        printf("%c" ,inch[i]);
    }
    char ch[] = "GATE2022";

    char *ptr = ch;
    printf("\n");
    printf("**********************************\n");

    printf("%c\n" , ptr[1]);
    printf("%c\n" , ptr[5]);
    printf("%c\n" , ptr[3]);

    printf("**********************************\n");

    printf("%d\n" , ptr);

    printf("**********************************\n");

    printf("%c\n" , ptr[4] - ptr[3]);
    printf("%d\n" , ptr[4] - ptr[3]);


    printf("**********************************\n");

    printf("%s\n" , ptr + ptr[3] - ptr[1]);
    printf("%s\n" , ptr + 2);


    printf("**********************************\n");

    printf("%s\n" , ptr);
}