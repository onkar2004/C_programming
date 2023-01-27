#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int arr1[9];
    int arr2[9];
    int arr3[9];
    int l=0;
  //Write your code here.
  for(int i =1;i<=k;i++){
      for(int j=i+1;j<=n;j++){
          arr1[l] = i&j;
          arr2[l] = i|j;
          arr3[l] = i^j;
          l++;
      }
  }
  for(int i=0;i<l;i++){
    printf("%d",arr1[i]);
  }
printf("\n");
   for(int i=0;i<l;i++){
    printf("%d",arr2[i]);
  }
printf("\n");
   for(int i=0;i<l;i++){
    printf("%d",arr3[i]);
  }
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

 
    return 0;
}
