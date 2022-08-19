#include<iostream>
using namespace std;

class demo 
{
    public:
    int i;
     const int k ;


    demo(int a,int b):k(b)
    {
        i = a;
    }

void fun()
{
    cout<<"in  fun\n";
    i++;

}


    void gun() const
{

    int x = 10;
    const y = 20;   //x and y are local variables not characteristics
    cout<<"in gun\n";
    i++; //not allowed
    k++;  //not allowed

    y++; //not allowed
    x++; //allowed

}
};



int main ()
{

demo obj(11,28);
cout<<obj.i<<"\n";

cout<<obj.k<<"\n";
return 0;

}