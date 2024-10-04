#include<stdio.h>
int main(){
    int i,j;
    int isPrime;

    for(i=100;i<=500;i++){
        isPrime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1 && i> 1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}