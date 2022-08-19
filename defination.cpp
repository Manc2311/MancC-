#include<iostream>

using namespace std;

class demo 
{
    public:

    int i,j;

    void fun(int i)
    {
        cout<<"incide fun\n";
    }

      void gun()
    {
        cout<<"incide gun\n";
    }
};

int main()
{

    demo obj();
    obj.fun(12);

    return 0;
}