#include<iostream>
using namespace std;

float Maximam(float No1, float No2)
{
    float Ans;

    if(No1 > No2)
    {
        Ans = No1;
    }
    else
    {
        Ans = No2;
    }

    return Ans;
}

int main()
{
    cout<<Maximam(21.5f,11.5f)<<endl;

    return 0;
}