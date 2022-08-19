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

base *bp1 = new derived(); //upcasting     8 byets fetch 16 byte hence it is upcasting kamiwala jastv walyala access krto
derived *dp1 = new base(); //downcasting    16 byte fetch 8 bytes  jast wala kami walyala access krto   //downcasting la error yeto 

    return 0 ;
}
