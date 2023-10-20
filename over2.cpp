#include<iostream>
using namespace std;
class Student 
{
    private:
    int rollno;
    float fees;
    public:
    Student (int a,float m)
    {
        rollno=a;
        fees=m;
        
    }
    operator int()
    {
        return (rollno);
    }
    operator float()
    {
        return (fees);
    }
};
void main()
{
    int j;
    float f;
    Student st(5,4200,50);
    j=st;
    f=st;
    cout<<"\n value of j:"<<j<<"\n";
    cout<<"\n value of f:"<<f<<"\n";
    getch();
}