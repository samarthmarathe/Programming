#include<stdio.h>

float AddTwoMembers(float fNo1, float fNo2)
{
    float fAns= 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;
}

int main()
{
    // Variable creation with default values
    float fValue1 = 0.0f;                           // To store first input
    float fValue2 = 0.0f;                           // To store second input
    float fResult = 0.0f;                            // To store the result

    printf("Enter First Number: \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number: \n");
    scanf("%f",&fValue2);

    fResult = AddTwoMembers(fValue1, fValue2);                     // Perform the Addition

    printf("Additon is : %f\n",fResult);

    return 0;
}