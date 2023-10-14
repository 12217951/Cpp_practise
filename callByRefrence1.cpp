#include<iostream>
using namespace std;
//function definition to swap the values.
void swap(int &x, int &y)
{
    int temp;
    temp= x;
    x=y;
    y= temp;

}

int main()
{
    //local variable declaration.
    int a= 100;
    int b= 200;
    cout<<"Before swap, value of a: "<<a<<endl;
    cout<<"Before swap, value of b: "<<b<<endl;
    //calling a function to swap the values using variable refrence.
    swap(a,b);
    cout<<"After swap ,value of a: "<<a<<endl;
    cout<<"After swap ,value of b: "<<b<<endl;
    return 0;

}