#include<stdio.h>

int main()
{
    int iCnt = 0;
    int Arr[5] = {0};

    printf("Enter the Elements: \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("Elements of the Array are: \n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}