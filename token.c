#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    scanf("%[^\n]%*c", &s);
   
   
   int len = strlen(s);
   
    //Write your logic to print the tokens of the sentence here.
    int i =0;
    
    while(i!=len){
        if(s[i]==' '){
           printf("\n");
            i++;
        }
       printf("%c",s[i]);
       i++;
    }
    // for(int i=0;i<len;i++){
    //      if(s[i]==' '){
    //         printf("\n");
    //         i++;
    //     }
    //     printf("%c",s[i]); 
    // }
   
    return 0;
}
