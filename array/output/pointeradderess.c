#include<STDIO.h>
int main(){
int a=10;
int *ptr ;
ptr=&a;

printf("value of a=%d\n",a);
printf("adderess of a=%p\n",(void*)&a);
printf("value of ptr=%d\n",*ptr);
printf("adderess of ptr=%p\n",(void*)&ptr);
    return 0;
}