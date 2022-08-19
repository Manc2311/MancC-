#include<iostream>
using namespace std;

class demo 
{
    public:
    int i;
    //const int k = 10;  //its not good programming practice 
     const int k ;

    demo():k(30)  //memeber intialization
    {
        i = 10;
        //k = 90;  intialize gives error 
    }
};

int main ()
{

demo obj;
cout<<obj.k<<"\n";
return 0;

}