#include<stdio.h>
int main(){
    int n,reverse=0,t;

    printf("Enter value n: ");
    scanf("%d",&n);
    t=n;

    while(t!=0){
        reverse = reverse*10;
        reverse = reverse+t%10;
        t= t/10;
    }
    if(n==reverse){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome",n);        
    }


    return 0;
}