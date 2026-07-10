#include<stdio.h>
int main(){

    int arr[5];
    int sum=0;
    int average;
    printf("enter any 5 values:\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
average=sum/5;
    printf(" average of all array elements=%d",average);
return 0;
}