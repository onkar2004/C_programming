#include<stdio.h>

struct structurepadding
{
    // int a;
    char ch1;
    int ab;
    char ch;
    //int b;
    //char ch2;
};
    // memory will be wasted but cpu cycle will be save;

 /* In structure padding proccesser read one byte of memeory at a time 
    if char take one bit and after that their will be an integer then processor 
    needs 8 bit or 2 byte(32 bit processsor) memory raeding 
    processor create empty room if that data is not fitting in one byte the that 
    data goes to next byte and privious byte reaming bit are empty*/


int main()
{
   struct structurepadding var;

   printf("size of Strut is %d",sizeof(var));
   
}
