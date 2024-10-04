#include<stdio.h>
int main()
{
    int row,j;
    for (row='E'; row>='A'; row--)
    {
        for (j='A'; j<=row; j++)
        {
            printf("%c",j);
        }
        printf("n");
    }
    return 0;
}
