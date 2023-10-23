#include<iostream>
using namespace std;
class A
{
    public: 
    A()
    {
        cout<<"\n Calling default class constructor";

    }
    ~A()
    {
        cout<<"\n Calling  base class destructor";
    }
};
class B:public A{
    public:
    B()
    {
        cout<<"\n Calling ddefault derived constructor ";
    }
    ~B()
    {
        cout<<"\n Calling derived class destructor ";
    }
};
int main()
{
    B obj1;
    return 0;
}