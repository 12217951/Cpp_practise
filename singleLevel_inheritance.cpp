#include<iostream>
using namespace std;

class student
{
    private:
        int id;
        char name[10];
    public:
        void get_student()
        {
            cout<<"Enter student ID and name: ";
            cin>>id>>name;
        }
        void put_student()
        {
            cout<<"ID : "<<id<<endl;
            cout<<"Name: "<<name<<endl;
        }
};

class phy: public student
{
    private:
        float height, weight;
    public:
        void getphy()
        {
            cout<<"Enter student height and weight : ";
            cin>>height>>weight;
        }
        void putphy()
        {
            cout<<"Height: "<<height<<endl;
            cout<<"Weight: "<<weight<<endl;
        }
};

int main()
{
    phy p;
    p.get_student();
    p.put_student();
    p.getphy();
    p.putphy();
    return 0;
}