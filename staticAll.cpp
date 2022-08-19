#include<iostream>

using namespace std;

class demo 
{
    public:

    int i,j;
    static int x;

    demo(int a = 10,int b = 24)   //dfault parameterised constructor
    {

        cout<<"in constructor\n";

        this->i = a;
        this->j = b;

    }
 
    void fun(int no)
    {
        cout<<"in non static fun\n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<no<<"\n";
        cout<<demo::x<<"\n";
    }

  static void gun(int value)
    {
        cout<<value<<"\n";
        cout<<"in gun\n";
    }


};

int demo::x = 67;


int main ()
{

demo obj;
 obj.i;
 obj.j;

obj.fun(55);
cout<<sizeof(obj)<<"\n";
//cout<<this->x<<"\n"

cout<<demo::x<<"\n";
demo::gun(78);
    return 0;

}