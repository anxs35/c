#include<stdio.h>
void display(int arr[],int n){
for(int i=0; i < n; i++){
printf("%d",arr[i]);
}
printf("\n");
}
int insertion(int arr[],int size,int element,int capacity,int index){
if(size>=capacity){
printf("Error");
}
for(int i=size-1;i>=index;i--){
arr[i+1]=arr[i];
}
arr[index]=element;
return 1;
}
int main(){
int arr[100]={12,45,76,34,87,43};
int size=6, element=69, index=3;
display(arr,size);
insertion(arr,size,element,100,index);
size+=1;
display(arr,size);
return 0;
}