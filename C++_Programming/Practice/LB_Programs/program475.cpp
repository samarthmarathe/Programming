#include<iostream>
using namespace std;

float Maximam(float No1, float No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    cout<<Maximam(21.5f,11.5f)<<endl;

    return 0;
}