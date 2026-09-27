#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0X00010000;
    UINT iAns = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Seventeenth Bit is ON\n");
    }
    else
    {
        printf("Seventeenth Bit is OFF\n");
    }


    return 0;
}