#include<iostream>
using namespace std;

template <class T>

T Maximam(T No1, T No2)
{
    T Ans;

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
    cout<<Maximam(21.5,11.5)<<endl;
    cout<<Maximam(21,11)<<endl;

    return 0;
}