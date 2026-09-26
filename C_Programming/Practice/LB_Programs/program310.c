#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 4; // 0 1 0 0
    UINT iAns = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Third Bit is ON\n");
    }
    else
    {
        printf("Third Bit is OFF\n");
    }


    return 0;
}