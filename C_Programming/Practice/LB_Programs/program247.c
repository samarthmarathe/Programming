#include<stdio.h>

void strlenX(char *str)
{
    *str = 'A';
}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);             // %[^'\n']s this is regex

    strlenX(Arr);
    
    printf("String is: %s\n",Arr);

    return 0;
}