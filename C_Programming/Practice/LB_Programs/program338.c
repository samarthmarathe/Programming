#include<stdio.h>       //**** */
typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0xFFFFEFFF;   //1110 1111 1111 1111    

    printf("Enter number: \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated number: %d\n",iNo);
    
    return 0;
}