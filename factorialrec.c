#include<stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main(){
    int n;

    printf("Enter the value n: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        printf("%d\n",factorial(i));
    }
    return 0;
}