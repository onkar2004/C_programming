#include<stdio.h>

int main()
{
    int mark1,mark2,mark3;
    
    printf("Enter marks of Math : ");
    scanf("%d" , &mark1);
    printf("\nEnter marks of PSAP : ");
    scanf("%d" , &mark2);
    printf("\nEnter marks of RMAE : ");
    scanf("%d" , &mark3);

    int mark = mark1 + mark2 +mark3;

    int  percentage =mark*100/300;

    if( percentage>=90){
        printf("Your Grade is : A++");
    }
    else if( percentage>=80 &&  percentage<90){
        printf("Your Grade is : A");
    }
     else if( percentage>=70 &&  percentage<80){
        printf("Your Grade is : B++");
    }
     else if( percentage>=60 &&  percentage<70){
        printf("Your Grade is : B");
    }
     else if( percentage>=50 &&  percentage<60){
        printf("Your Grade is : C");
    }
     else if( percentage>=40 &&  percentage<50){
        printf("Your Grade is : C++");
    }
    else if( percentage>=35 &&  percentage<40){
        printf("Your Grade is : D");
    }
    else{
        printf("Sorry , Your fail.");
    }
}