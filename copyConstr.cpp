//  A copy constructor is a constructor that is used to initialize an object with an existing object of the same type.

 #include<iostream>
using namespace std;
class counter
{
    int c;
    public:
    counter(int x)
    {
        c=x;
    }
    counter(counter &obj)
    {
        c=obj.c;
    }
    void show()
    {
        cout<<c;
    }
    
};
int main()
{
    counter c1(10);
    counter c2(c1);
    cout<<"Original constructor" ;
    c1.show();
    cout<<"\nOriginal constructor" ;
    c2.show();
}