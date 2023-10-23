#include<iostream>
using namespace std;
class A
{
    int x;
    public: 
    A(int a)
    {
        x=a;
        cout<<"\n Calling base  class parameterized "<<x;

    }
    ~A()
    {
        cout<<"\n Calling  base class destructor";
    }
};
class B:public A{
    int l;
    public:
    B(int p):A(p)
    {
        l=p;
        cout<<"\n Calling derived  class parameterized";
    }
    ~B()
    {
        cout<<"\n Calling derived class destructor ";
    }
};
int main()
{
    B obj2(1);
    return 0;
}