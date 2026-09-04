#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Parametrised constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor\n";
            iSize = X;                  //Characteristics initialisation
            Arr = new int[iSize];       //Resourse Allocation
        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;               //Resourse Dealloation
        }
};

int main()
{
    ArrayX aobj1(5);   

    return 0;
}