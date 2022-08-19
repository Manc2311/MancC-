#include<iostream>
using namespace std;

class demo 
{
    public:
    int i;
     const int k ;

    demo():k(30) 
    {
        i = 10;
        //k = 90;  
    }

    demo(int a,int b):k(b)
    {
        i = a;
    }
};

int main ()
{

demo obj(11,28);
cout<<obj.i<<"\n";

cout<<obj.k<<"\n";
return 0;

}
