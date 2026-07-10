#include<stdio.h>
int main (){
  int arr[5];
  int sum=0;
  printf("Enter any 5 elements:\n");
  for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];

  } 
  int average=sum/5;
  printf("average is =%d",average); 
    return 0;
}