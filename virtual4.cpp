#include<iostream>

using namespace std;

class base 
{
    public:
    int x,y;

   virtual void fun ()
    {
        cout<<"base gun"<<"\n";
    }

    void gun()
    {
        cout<<"base gun"<<"\n";   //defination
    }

};

class derived:public base
{
    public:
    int i,j;

    void sun ()
    {
        cout<<"derived sun"<<"\n";
    }

    void fun()
    {
        cout<<"derived fun"<<"\n";
    }
};


int main()
{
       
base *bp = new derived(); //upcasting   
bp->fun();
bp->gun();
//bp->sun(); //not allowed


cout<<"size of base"<<sizeof(base)<<"\n";
cout<<"size of derived"<<sizeof(derived);


return 0 ;
}


