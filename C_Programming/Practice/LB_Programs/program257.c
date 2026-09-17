#include<stdio.h>

int CountSpace(const char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);             // %[^'\n']s this is regex

    iRet = CountSpace(Arr);
    
    printf("Frequency of Spaces are: %d\n",iRet);

    return 0;
}