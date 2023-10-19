#include<iostream>
using namespace std;
class rect
{
    double width;
    double height;
    public:
    void out()
    {
        cout<<"Enter length of rect: "<<endl;
        cin>>width;
        cout<<"Enter height of rect: "<<endl;
        cin>>height;
    }
    void area()
    {
        cout<<"area: "<<this->width*this->height<<endl;
    }
    void dimen()
    {
        if(height==width)
        {
            cout<<"Same dimension.."<<endl;
        }
        else{
            cout<<"Different dimensions.."<<endl;
        }
    }
};
int main()
{
    rect rect1;
    rect rect2;
    rect1.out();
    rect1.area();
    rect1.dimen();
    rect2.out();
    rect2.area();
    rect2.dimen();
    return 0;

}