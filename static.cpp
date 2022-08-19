#include<iostream>

using namespace std;

class demoo
{
    public:
    int i,j;
    static int x;

    demoo()
    {
        cout<<"in default con\n"; 
        i = 10;
        j = 20;

    }
};

int demoo::x = 30;

int main ()
{

    cout<<demoo::x<<"\n";
    demoo obj1;
    demoo obj2;

    cout<<sizeof(obj1)<<"\n";
    cout<<sizeof(obj2)<<"\n";
    cout<<(obj1.i)<<"\n";
    cout<<obj2.i<<"\n";

    obj1.i++;
    cout<<(obj1.i)<<"\n";





    return 0;

}
