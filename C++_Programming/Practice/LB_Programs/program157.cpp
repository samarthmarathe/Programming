#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Default constructor
        ArrayX()
        {

        }

        //Parametrised constructor
        ArrayX(int X)
        {

        }
};

int main()
{
    ArrayX aobj1;
    ArrayX aobj2(5);

    cout<<sizeof(aobj1)<<endl;        

    return 0;
}