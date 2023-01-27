#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    scanf("%d",&size);  
    char arr[size];  
    
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int arrcount[size];
    for(int i =0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        arrcount[i] = count;
        count =0;
    }
    
    for(int i =0;i<size;i++){
        printf("%d ",arrcount[i]);
    }
    return 0;
}
