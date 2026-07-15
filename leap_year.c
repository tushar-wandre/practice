#include<stdio.h>
int main(){
int year;

printf("Enter your year:\n");
scanf("%d",&year);

if(year % 4 == 0){
    printf("Your entered year is leap year");
}
else{
    printf("your entered year is not leap year");
}
    return 0;
}