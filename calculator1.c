#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,sum,sub,div,mul,sqr1,sqr2;

    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter First Number : ");
    scanf("%d",&num1);

    char opration;
    printf("Enter Opration : ");
    scanf("%s",&opration);

    switch(opration)
    {
        case '+':
        sum = num1+num2;
        printf("Sum of given numbers is %d",sum);
        break;

        case '-':
         sub = num1-num2;
        printf("Subtration of given numbers is %d",sub);
        break;

        case '*':
        mul = num1*num2;
        printf("Multiplication of given numbers is %d",mul);
        break;

        case '/':
         div = num1/num2;
        printf("Division  of given numbers is %d",div);
        break;

        case '@':
        sqr1 = sqrt(num1);
        printf("Sqr. root of number 1 is %d",sqr1);
        sqr2 = sqrt(num2);
        printf("Sqr. root of number 2 is %d",sqr2);

        default :
        printf("\nInvalid Opration");
        


    }
}
