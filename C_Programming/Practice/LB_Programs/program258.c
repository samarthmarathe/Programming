#include<stdio.h>

void Update(char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'l')
        {
            *str = '-';
        }
        
        str++;
    }
}
int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);             // %[^'\n']s this is regex

    Update(Arr);
    
    printf("Updated String: %s\n",Arr);

    return 0;
}