#include<stdio.h>

int main()
{
    // Variable creation with default values
    float fValue1 = 0.0f;                           // To store first input
    float fValue2 = 0.0f;                           // To store second input
    float Result = 0.0f;                            // To store the result

    printf("Enter First Number: \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number: \n");
    scanf("%f",&fValue2);

    Result = fValue1 + fValue2;                     // Perform the Addition

    printf("Additon is : %f\n",Result);

    return 0;
}