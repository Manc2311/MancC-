#include<iostream>

using namespace std;

class demo 
{
    public:

    int i,j;

    void fun()
    {
        cout<<"incide fun\n";
    }

      void gun()
    {
        cout<<"incide gun\n";
    }
};


class hello:public demo
{
    public:
    int x,y;

    void sun()  //defination
    {
        cout<<"inside sun\n";

    }

    void gun()  //redefination -- 
    {
        cout<<"in gun\n";
    }
};

int main()
{
    return 0;
}