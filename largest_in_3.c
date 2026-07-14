#include<stdio.h>
int main(){
int a,b,c;

//taking three inputs from the user
printf("Enter your first number:\n");
scanf("%d",&a);
printf("Enter your second number:\n");
scanf("%d",&b);
printf("Enter your third number:\n");
scanf("%d",&c);
if(a>b && a>c){
    printf("%d is gereter",a);
}
else if (b>a && b>c){
    printf("%d is greater",b);
}
else{
    printf("%d is greater ",c);
}

    return 0;
}