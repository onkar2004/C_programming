#include<stdio.h>

void swap(int *ptr1 , int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 =  *ptr2;
    *ptr2 = temp;

        
}
int main()
{
  int num1,num2;
  printf("Enter num1 : ");
  scanf("%d",&num1);
  printf("Enter num1 : ");
  scanf("%d",&num2);

printf("\nbefore swaping \n");
printf("\nnum1 ==>> %d",num1);
printf("\nnum2 ==>> %d",num2);
    
    swap(&num1,&num2);

printf("\nafter swaping \n");
printf("\nnum1 ==>> %d",num1);
printf("\nnum2 ==>> %d",num2);

}