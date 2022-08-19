#include<iostream>
using namespace std;


class demo
{
    public:
  inline  int add(int no1,int no2)    
    {
        int ans = 0;
        ans = no1 + no2;
        return ans;
    }
};

int main()
{
    demo obj; 
    cout<<sizeof(obj)<<"\n";  // size of empty class object is 1 bcoz as we create object of that class   ,for memory existance we have to give at least 1byte memory allocate
    int ret = 0;

    ret = obj.add(10,11);

    cout<<ret<<"\n";

    return 0;
}


//for loop recursive function array of more memory    (in all this cases inline not allowed)  
//as like register storage class it req us if any other condition of above then inline doesn't work 