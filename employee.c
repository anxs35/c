#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    int salary;
};

int main(){
    struct Employee emp[5];
    int i;

    for(i=0;i<5;i++){
        printf("Enter Employee %d details:\n",i+1);

        printf("Employee id: \n");
        scanf("%d",&emp[i].id);

        printf("Employee Name: \n");
        scanf(" %[^\n]%*c",&emp[i].name);

        printf("Salary (Monthly): \n");
        scanf("%d",&emp[i].salary);
    }

    printf("Employee name 5000 above salary\n");
    for(i=0;i<5;i++){
        if(emp[i].salary>5000){
            printf("Student %d\n",emp[i].id);
            printf("Student Name:%s\n",emp[i].name);
            printf("Salary:%d\n",emp[i].salary);
            printf("\n");
        }
    }


    return 0;
}