#include<stdio.h>

#pragma pack(1)

struct structurepadding
{
    // int a;
    char ch1;
    int ab;
    char ch;
    //int b;
    //char ch2;
};
   // save memory but waste cpu cycle or it use cpu cycle instead using extra memory

int main()
{
   struct structurepadding var;

   printf("size of Strut is %d",sizeof(var));
   
}