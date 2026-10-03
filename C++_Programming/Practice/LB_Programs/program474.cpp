#include<iostream>
using namespace std;

int Maximam(int No1, int No2)
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
    cout<<Maximam(21,11)<<endl;

    return 0;
}