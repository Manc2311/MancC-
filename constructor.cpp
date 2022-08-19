#include<iostream>

using namespace std;


class demo{
    public:
    int x;
    int y;

    demo()
    {
        cout<<"default cons\n";

    }
    demo(int i,int j)
    {
      cout<<"inside parameterised\n";
    }

    demo(demo &ref)
    {
        cout<<"copy constr\n";
    }

    ~demo()
    {
        cout<<"inside destructor\n";
    }
};

int main()
{

    demo obj1;
    return 0;

}