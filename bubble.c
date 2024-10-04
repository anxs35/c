#include<stdio.h>
#define MAXSIZE 100
void main(){
    int array[MAXSIZE];
    int i,j,n,temp;

    printf("Enter the value n:\n");
    scanf("%d",&n);

    printf("Enter the elements one by one:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("Input Array is: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<(n-i-1);j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    printf("\nSorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}