#include<iostream>
using namespace std;

class BC
{
    public:
    virtual void show()
    {
        cout<<"Show() of base class"<<endl;
    }
};
class DC: public BC{
    void show()
    {
        cout<<"show() of derived class"<<endl;
    }
};

int main()
{
    BC *bptr;
    BC base;
    bptr= &base;
    cout<<"Runtime polymorphism---"<<endl;
    cout<<"bptr points to base obj "<<endl;
    bptr->show();       // base class show is called 
    //derived class
    DC derived;
    bptr =&derived;
    cout<<"bptr now points to derivd obj "<<endl;
    bptr->show();   //derived class show is called
    return 0;
}

// output
// Runtime polymorphism---
// bptr points to base obj 
// Show() of base class
// bptr now points to derivd obj        
// show() of derived class

