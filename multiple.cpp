#include<iostream>
using namespace std;

class Base1
{
      public:
        int i,j;

       
        Base1()
        {
            cout<<"Base1 constrcutor\n";
        }
        ~Base1()
        {
            cout<<"Base1 destructor\n";
        }

         void gun()
        {
            cout<<"gun call from base1\n";
        }
};

class Base2
{
      public:
        int x,y;


        
        Base2()
        {
            cout<<"Base2 constrcutor\n";
        }
        ~Base2()
        {
            cout<<"Base2 destructor\n";
        }
        void sun()
        {
            cout<<"sunn call from base2\n";
        }
};



class Derived : public Base2, Base1
{
    public:
        int a;

        Derived()
        {
            cout<<"Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived derstructor\n";
        }

        void fun()
        {
            cout<<"fun call from deri\n";
        }
};

int main()
{
    Derived dobj;
    
    dobj.gun();
    dobj.fun();
    dobj.sun();
    
    return 0;
}