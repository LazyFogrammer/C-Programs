#include<stdio.h>
int main()
{

    int arr[5] [4]={
    1,2,3,4,
    7,8,9,4,
    8,9,6,5,
    3,5,6,8,
    7,8,3,5
    };
    int i, j;
    for(i=0;i<4;i++){
        for(j=0;j<5; j++){
            printf("%d ",arr[j] [i]);
        }
        printf("\n");
    }
    return 0;
}
