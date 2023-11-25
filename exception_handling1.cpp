#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    try
    {
        cout<<"Enter two number: ";
        cin>>a>>b;
        if(b==0)
        {
            throw 0;
        }
        else{
            cout<<"Division = "<<a/b;
        }
    }
    catch(int x)
    {
        cout<<"Division not possible ";
    }
}