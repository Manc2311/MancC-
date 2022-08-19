#include<iostream>
using namespace std; 

int main()
{

    int input = 0;
    enum Days {Sun,Mon,Tue,Wed};  //didnt got memory , memory got in text section


enum Days obj;
obj = Tue;

cout<<obj<<"\n";

cout<<sizeof(obj)<<"\n";

enum gender {f = 1,m = 2};
    cout<<"1:fe\n";
    cout<<"2:m\n";

    cin>>input;


switch(input)
{
    case f :
    cout<<"tax free\n";
    break;

    case m :
    cout<<"tax all\n";
    break;

    default:
    cout<<"invalid\n";

}
    return 0;

}

