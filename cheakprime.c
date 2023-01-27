#include<stdio.h>

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d" ,&num);

    int count =0;

    for(int i =1;i<=num;i++)
    {
        if(num%i==0){
            count++;
        }
    } 
    if(count==2){
        printf("Given number is prime number");
    }
    else{
        printf("Given number is not prime number");
    }
}