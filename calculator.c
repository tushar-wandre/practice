#include<stdio.h>
int main() {
    float a,b,result;
    int choice;
    printf("1. ADDITION(+):\n");
    printf("2. Substraction(-)\n");
    printf("3. Multiplication(*)\n");
    printf("4. division(/)\n");

    printf("Enter your choice(1-4):\n");
    scanf("%d",&choice);
    
   printf("Enter your first number:\n");
   scanf("%f",&a);
   printf("Enter your second number:\n");
   scanf("%f",&b);

   switch(choice){
    case 1:
    result=a+b;
    printf("sum=%f",result);
    break;

    case 2:
    result=a-b;
    printf("sub=%f",result);
    break;

    case 3:
    result=a*b;
    printf("mult=%f",result);
    break;

    case 4:
    if( b == 0 ){
        printf("error!,divide by zero is not allowed.\n");
    }
    else{
        result=a/b;
        printf("div=%f",result);
        
    }
    break;
    default:
    printf("invilid choice!\n");
   }

    return 0;
}