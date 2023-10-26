///correct the code
#include<iostream>
using namespace std;
class student 
{
    protected:
    int roll_no;
    public:
    void get_no(int);
    void put_no(void);
};
void student::get_no(int a)
{
    roll_no=a;
}
void student::put_no()
{
    cout<<"Roll number is: "<<roll_no;
}

class test:public student   //first level derivation
{
    protected:
    float sub1 ,sub2;
    public:

    void get_marks(float,float);
    void put_marks(void);

};
void test::get_marks(float x,float y)
{
    sub1=x;
    sub2= y;

}
void test::put_marks()
{
    cout<<"Marks  int sub1  "<<sub1;
    cout<<"Marks  int sub2  "<<sub2;
}

void result::display(void)
{
    Total=sub1+sub2;
    Put_no();        //function of class student 
    Put_marks();        //function of class test
    cout<<"Total= "<<total; 
}

int main(){
    result student1;
    student1.get_no(102);
    student21get_marks(80.0,98.5);
    student1.dispaly();
    return 0;

}