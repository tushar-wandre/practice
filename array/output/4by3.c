#include<stdio.h>
int main(){

    int arr[4][3];

    printf("enter any 12 number that you want in 4 by 3 form:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);

        }
        
    }
    printf("you Entered values in 4 by 3 form:");
    for (int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
