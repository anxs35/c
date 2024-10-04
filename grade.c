#include<stdio.h>
int main(){
    int M;

    printf("Enter Marks: ");
    scanf("%d", &M);

    if(M>=90){
        printf("Grade: A+");
    } else if(M>=80){
        printf("Grade: A");
    } else if(M>=70){
        printf("Grade: B+");
    } else if(M>=60){
        printf("Grade: B");
    } else if(M>=50){
        printf("Grade: C");
    } else {
        printf("Grade: F");
    }


    return 0;
}