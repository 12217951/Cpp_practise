#include<iostream>
using namespace  std;

class base
{
    public:
    base()
    {
        cout<<"Constructing base \n";
    }
    ~base()
    {
        cout<<"destructing base \n";
    }

};

class derived1:public base{
    public:
    derived1()
    {
        cout<<"Constructing derived \n";
    }
    ~derived1()
    {
        cout<<"Destructing derived \n";
    }
};
int main()
{
    base *b=new derived1;
    delete b;
    return 0;
}

// output:
// Constructing base 
// Constructing derived 
// Destructing base 