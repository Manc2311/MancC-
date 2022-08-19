#include<iostream>
using namespace std;


class demo
{
  public:
  int  add(int no1,int no2)    
  int  sub(int no1,int no2)      


  
};                                     //if function defines is out of class then it is must to give inline keyword
                                          //constructor can't be inline its not a good programming practice
  int demo:: add(int no1,int no2)    
    {
        int ans = 0;
        ans = no1 + no2;
        return ans;
    }

 int demo:: sub(int no1,int no2)    
    {
        int ans = 0;
        ans = no1 - no2;
        return ans;
    }

int main()
{
    demo obj; 
    cout<<sizeof(obj)<<"\n";  
    int ret = 0;

    ret = obj.add(10,11);

    cout<<ret<<"\n";

    return 0;
}

 