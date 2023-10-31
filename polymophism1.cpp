#include<iostream>
using namespace std;

class BC
{
    public:
    void show()
    {
        cout<<"\n show() of base class"<<endl;
    }
};
class DC:public BC{
    public:
    void show()
    {
        cout<<"show() of derived class "<<endl;

    }
};

int main()
{
    BC *bptr;
    BC base;
    bptr=&base;
    cout<<"\n------Early BInding----"<<endl;
    cout<<"bptr points to base obj "<<endl;
    bptr->show();  //base class show is called
    //deriived class
    DC derived;
    cout<<"bptr now points  to derived obj"<<endl;
    bptr->show();  //base class show is called
    return 0;
}

// output
// ------Early BInding----        
// bptr points to base obj        

//  show() of base class
// bptr now points  to derived obj

//  show() of base class