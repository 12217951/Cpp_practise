#include<iostream>
using namespace std;
class employee
{
    public:
    employee()
    {
        cout<<"I am employee "<<endl;
    }
    ~employee()
    {
        cout<<"Employee destroyed "<<endl;
    }
};
class company
{
    public:
    employee *emp;
    // company HAS-A employee
    company(employee *emp)
    {
        this->emp=emp;
        cout<<"This is company"<<endl;
        cout<<this->emp;
    }
    ~company()
    {
        cout<<"Company  destroyed "<<endl;
    }
};

int main()
{
    employee *e1 = new employee;
    {
        company c1(e1);
    }
    //delete e1
}