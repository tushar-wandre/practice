#include<stdio.h>
int main(){

    printf("Multiplication table of 20:\n");
    for (int i=1; i<=10; i++){
        printf("20*%d=%d\n",i,20*i);
    }
    printf("Multiplication table of 30:\n");

    for(int i=1; i<=10; i++){
        printf("30*%d=%d\n",i,30*i);
    }
    return 0;
}