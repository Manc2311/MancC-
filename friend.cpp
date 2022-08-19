#include<iostream>
using namespace std;



class hello
{

public:

void fun();

};
class demo {   
    public:
    int i;

    protected:
    int k;

    private:
    int j;
    public:
    demo()
    {
        i = 10;
        k = 23;
        j= 34;
    }

    friend void  hello::fun(); 
};

void hello::fun()   //friend
{
    demo obj1;
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";
    cout<<obj1.k<<"\n";

};


int main ()
{

hello hobj;
hobj.fun();

   // fun();  
    //demo obj;

    return 0;
}
