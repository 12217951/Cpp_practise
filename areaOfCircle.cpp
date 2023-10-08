#include<iostream>
using namespace std;
// class definition
class Circle{
    public:
    double radius;
    double compute_area()
    {
        return 3.14*radius*radius;

    }
};
int main()
{
    Circle obj;
    obj.radius=5.5;

}