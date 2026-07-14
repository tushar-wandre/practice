#include<stdio.h>
int main (){
int num;
//taking the input form the user

printf("Enter any ineger :\n");
scanf("%d",&num);

if(num>0){
    printf("Entred intger is positive");
}
else if (num<0){
    printf("Entered integer is negative");
}
else {
    printf("entered number is zero");
}

return 0;
}