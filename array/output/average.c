#include<stdio.h>
int main (){

    int arr[5];
    int sum=0;

    printf("enter your 5 values:\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }

    printf("sum=%d",sum);
    return 0;
}