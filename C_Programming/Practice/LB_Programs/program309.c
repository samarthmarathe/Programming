#include<stdio.h>

int main()
{
    unsigned iNo = 0, iMask = 4; // 0 1 0 0
    unsigned iAns = 0;

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