#include<stdio.h>
int main(){
    int i,j,k,N;
    
    printf("Enter the value of N:");
    scanf("%d",&N);
    
    int A[N][N];
    int B[N][N];
    int C[N][N];
    

    printf("Enter the element for matrix A: ");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements for matrix B: ");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            C[i][j]=0;
            for(k=0;k<N;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\t%d ",C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}