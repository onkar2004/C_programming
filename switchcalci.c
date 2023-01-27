#include<stdio.h>

void main()
{
    char op;
    printf("enter Oprator : ");
    scanf("%c",&op);
    
    int n1 ,n2;
    printf("Enter Two number1 : ");
    scanf("%d",&n1);
    printf("Enter Two number2: ");
    scanf("%d",&n2);
   
    int sum,sub,mul;
    float div;

    switch(op)
    {
        case '+':
           sum = n1+n2;
            printf("%d",sum);
            break;

        case '-':
            sub =n1-n2;
            printf("%d",sub);
            break;

        case '*':
            mul =n1*n2;
            printf("%d",mul);
            break;

        case '/':
            div = n1/n2;
            printf("%f",div);
            break;

        default :
            printf("Invalid Opration");
            break;
    }

}