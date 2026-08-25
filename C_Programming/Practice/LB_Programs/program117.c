#include<stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       printf("%d\n",Arr[iCnt]);     
    }
}

int main()
{
    int iLength = 4;
    int iCnt = 0;

    int Brr[iLength];

    printf("Enter the number you want in Array: ");

    for(iCnt = 0; iLength > iCnt; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    
    Display(Brr,iLength);

    return 0;
}