#include<iostream>

using namespace std;

int main()
{
    enum marv_batches {ppa = 0, lb = 1};

    const int fees[] = {12,14};
    const float duration[] = {2.3,5.6};
    int choice = 0;
    cout<<"select batch\n";
    cout<<"0:ppa\n";
    cout<<"1:lb\n";

    cin>>choice;


    switch(choice)
    {
        case ppa:
        cout<<"thanku\n";
        cout<<"duration:"<<duration[ppa]<<"\n";
        break;


        case lb:
        cout<<"thanku lb\n";
        cout<<"duration:"<<duration[lb]<<"\n";
        break;

        default:
        cout<<"sorry\n";


    }

}