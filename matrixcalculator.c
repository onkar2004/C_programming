#include<stdio.h>

int main()
{
    char op;
    printf("enter oprator : ");
    scanf("%c",&op);

    int n;
    printf("Enter No of Order of matrix : \n");
    scanf("%d",&n);
   


    int arr1[n][n];

    printf("enter elements for matrix 1:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           scanf("%d",&arr1[i][j]);
        }
    }
  
    int arr2[n][n];
    printf("enter elements for matrix 2:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           scanf("%d",&arr2[i][j]);
        }
    }
    
    int arradd[n][n];
    int arrsub[n][n];
    int arrmul[n][n];
    int arrtranspose1[n][n];
    int arrtranspose2[n][n];
    int sum=0;
   

    switch (op)
    {
    case '+':
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arradd[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        printf("Matrix of SUM : \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               printf("%d ",arradd[i][j]);
            }
          printf("\n");
        }
        break;

    case '-':
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arrsub[i][j]=arr1[i][j]-arr2[i][j];
            }
        }
         printf("Matrix of SUBRTACTION : \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",arrsub[i][j]);
            }
            printf("\n");
        }
        break;

     case '*' :
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                sum = sum+arr1[i][k]*arr2[k][j];
                }
                arrmul[i][j]=sum;
                sum=0;
            }
        }
         printf("Matrix of MALTIPLICATION : \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",arrmul[i][j]);
            }
            printf("\n");
        }
        break;
        case 'T' :
         for(int i =0;i<n;i++ ){
            for(int j =0;j<n;j++){
               arrtranspose1[i][j] = arr1[j][i];
            }
         }
          for(int i =0;i<n;i++ ){
            for(int j =0;j<n;j++){
               arrtranspose2[i][j] = arr2[j][i];
            }
         }

         printf("TRASPOSE of MATRIX  1 : \n");
        for(int i =0;i<n;i++ ){
            for(int j =0;j<n;j++){
                printf("%d ",arrtranspose1[i][j]);
            }
            printf("\n");
        }

          printf("TRASPOSE of MATRIX  2 : \n");
        for(int i =0;i<n;i++ ){
            for(int j =0;j<n;j++){
                printf("%d ",arrtranspose2[i][j]);
            }
            printf("\n");
        }
            break;
    default:
         printf("Invalid Opration ");
        break;
    }

}