#include<iostream>
using namespace std;

class base 
{
    public:
    int x,y;

   void gun ()
    {
     cout<<"derived gun"<<"\n";

    }

    void sun ()
    {
     cout<<"derived sun"<<"\n";

    }

    void run ()
    {
     cout<<"derived run"<<"\n";

    }


};



class derived: public base
{
    public:
    int i,j;

    virtual void gun ()
    {
     cout<<"derived gun"<<"\n";

    }

    void run ()
    {
     cout<<"derived run"<<"\n";

    }


};


int main ()
{
    derived dobj;

    base *bp = NULL;
    bp = &dobj;

     cout<<sizeof(base)<<"\n";
     cout<<sizeof(derived)<<"\n";

}