#include<stdio.h>
int main() {
int arr[5];

printf("Enter any five values:\n");
for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
}
printf("array elements in one dimensin:\n");
for(int i=0; i<5; i++){
    printf("%d",arr[i]);
}
    return 0;
}