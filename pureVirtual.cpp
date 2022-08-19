#include<iostream>
using namespace std;


class base 
{
    public:
    int x,y;

    int add(int a,int b)
    {
        return a + b;

    }

    virtual int sub(int a,int b) = 0;


};

class derived: public base 
{
    public:
    int i ,j;

    // int sub(int a,int b)
    // {

    //     return a-b;
    // }

    int multi(int a,int b)
    {
        return a*b;
    }
};

int main ()
{
    base  *bp = new derived();
    int ret = 0;

    ret = bp->add(11,20);
    cout<<ret<<"\n";

ret = bp->sub(11,10);
    cout<<ret<<"\n";

    // ret = bp->multi(11,20);
    // cout<<ret<<"\n";
}