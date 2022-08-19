#include<iostream>
using namespace std;

class demo 
{
    public:
    int i;
    //const int k = 10;  
     const int k ;

    demo():k(30)  
    {
        i = 10;
        //k = 90;  
    }
};

int main ()
{

demo obj;
cout<<obj.k<<"\n";
return 0;

}
