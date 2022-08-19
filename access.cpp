#include<iostream>
using namespace std;


class Demo 
{

    int i;
    public:
    int x;

    private:
   static int y;

    public:
    Demo()
    {
        x = 10;
       // y = 20;
        i = 30;
    }

    void fun()
    {
        cout<<"publicfun in\n";
        gun();
      //  cout<<y<<"\n";

    }

    private:
    void gun()
    {
        cout<<"in private gun\n";
       // fun();
        cout<<y<<"\n";
    }
};


int main ()
{
    Demo obj;

    obj.fun();
    obj.x;
    cout<<obj.x<<"\n";
    //obj.gun();
   // obj.y;
    return 0;
}
