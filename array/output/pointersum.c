#include<stdio.h>
int main (){
int a,b,sum;
int *p1,*p2;
p1=&a,p2=&b;

printf("Enter any two values:\n");
scanf("%d%d",&a,&b);
sum=*p1+*p2;
printf("sum=%d",sum);
    return 0;

}