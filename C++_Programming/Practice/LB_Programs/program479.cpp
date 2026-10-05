#include<iostream>
using namespace std;

template <class X>

X Maximam(X No1, X No2)
{
    X Ans;

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