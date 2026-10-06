#include<iostream>
using namespace std;

void Display(double Arr[], int Size)
{
    int Cnt = 0;

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        cout<<Arr[Cnt]<<endl;
    }
}

double Summation(double Arr[], int Size)
{
    int Cnt = 0;
    double Sum = 0;

    for(Cnt = 0; Cnt < Size; Cnt++)
    {
        Sum = Sum + Arr[Cnt];
    }

    return Sum;
}

int main()
{
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};

    Display(Brr,5);

    cout<<Summation(Brr,5)<<endl;

    return 0;
}