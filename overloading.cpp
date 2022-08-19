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

      void fun(int no)  //overloaded defination  -- ekach class mdhe same navache don  function
    {
        cout<<"incide gun\n";
    }
};

int main()
{

    demo obj;

    obj.fun(12);
    return 0;
}