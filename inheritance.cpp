#include<iostream>
using namespace std;

class base
{
    public:
    int x,y;

    base()
    {
        cout<<"in base constr\n";
    }

    ~base()
    {
        cout<<"in base destr\n";
    }

    void fun ()
    {
        cout<<"in fun\n";
    }
};

class derived : public base
{
    public:
    int i,j;

    derived()
    {
        cout<<"in dervued constr\n";

    }

     ~derived()
    {
        cout<<"in dervued destr\n";
        
    }

    void gun()
    {
        cout<<"in derived gun\n";
    }
};


int main ()
{
    derived dobj ;
    dobj.fun();
    dobj.gun();
    
    return 0;
}