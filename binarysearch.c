#include<stdio.h>

int binarysearch(int arr[] , int x ,int low , int high){
    while(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            low= mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(void){
    // size of array
    int size;
    printf("Enter Size of array : ");
    scanf("%d",&size); 
    // array declare
    int arr[size];
    // input array
    printf("Enter element of Array :  \n" );

    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);

    int x;
    printf("Enter number you want to search : ");
    scanf("%d",&x);
    printf("\n");

    int result = binarysearch(arr , x, 0, n-1);
    if(result == -1){
        printf("number is not found\n");
    }
    else{
        printf("number is found at a index %d",result+1);
    }
    return 0;
}
