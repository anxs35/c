#include<stdio.h>
#include<string.h>
int main(){

    char str1[50] = "HELLO";
    char str2[50] = "Welcome";

    printf("Length of the String 1: %d\n",strlen(str1));

    
    printf("Copied string:%s\n",strcpy(str2,str1));

    
    printf("Concatenation of string:%s\n",strcat(str1,str2));

    strcmp(str1,str2);
    printf("Compare str1 with str2:%s\n",);

    strrev(str1);
    printf("Reverse: %s\n",str1 );

    strlwr(str1);
    printf("Lower case:%s\n",str1);

    strupr(str2);
    printf("Upper Case:%s\n",str1);

    return 0;
}