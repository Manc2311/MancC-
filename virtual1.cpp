#include<iostream>

using namespace std;

class base 
{
    public:
    int x,y;

};

class derived:public base
{
    public:
    int i,j;
};


int main()
{
    //static mem
    // base bobj;
    // derived dobj;

//dyanimc memory
    base *bp = new base();
    derived *dp = new derived();

base *bp1 = new derived(); //upcasting     
derived *dp1 = new base(); //downcasting   

    return 0 ;
}
