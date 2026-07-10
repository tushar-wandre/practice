#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct student s;
    printf("Enter  roll no:\n");
    scanf("%d",&s.roll);

    printf("Enterr name:\n");
    scanf("%s",&s.name);

    printf("Enter marks:\n");
    scanf("%f",&s.marks);

    printf("\nStudent information :\n");
    printf("Roll no =%d\n",s.roll);
    printf("name=%s\n",s.name);
    printf("marks=%2f",s.marks);
    return 0;


}

