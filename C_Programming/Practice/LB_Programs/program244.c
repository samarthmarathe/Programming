#include<stdio.h>

void Display(char str[])
{
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
    printf("%c\n",str[2]);
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);             // %[^'\n']s this is regex

    Display(Arr);
    return 0;
}