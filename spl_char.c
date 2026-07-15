#include<stdio.h>
int main (){
    char ch;

    printf("Enter your character:\n");
    scanf("%c",&ch);

    if( ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ||
        ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U'  ) {
        printf("%c is vowel\n",ch);
    }
    else if(ch>='a' && ch <='z'||
            ch>='A' && ch <='Z'){
                printf("%c is a consonant\n",ch);
            }
    else if(ch>='0' && ch<='9'){
        printf("%c is an  digit\n",ch);
    }
    else{
        printf("%c is an special character",ch);
    }

    return 0;
}