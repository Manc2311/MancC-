#include<iostream>

namespace manasi
{
    void fun()
    {
        std::cout<<"inside fun\n";
    }
}


int main()
{
    std::cout<<"bappa\n";

    using namespace manasi;

    fun();
    return 0;
}