#include<iostream>
using namespace std;

class acc
{
    int accno;
    char name[10];
    public:
    void getacc()
    {
        cout<<"Enter account number and name: "<<endl;
        cin>>accno>>name;
    }
    void putacc()
    {
        cout<<"Account number: "<<accno<<endl;
        cout<<"Name: "<<name;
    }
};

class saving: public acc
{
    float bal;
    public:
    void getbal()
    {
        cout<<"Enter balance: "<<endl;
        cin>>bal;
        if(bal<500)
        {
            cout<<"Minimum balance 500";
        }
        else{
            cout<<"Account created ";
        }
    }
};

class curr: public acc
{
    float bal;
    public:
    void getbal()
    {
        cout<<"Enter balance: "<<endl;
        cin>>bal;
        if(bal<1000)
        {
            cout<<"minimum balance 1000"<<endl;
        }
        else{
            cout<<"Account created "<<endl;
        }
    }
};

int main()
{
    int opt;
    cout<<"(1). Savings Account "<<endl;
    cout<<"(2). Current Account "<<endl;
    cout<<"Enter any of the options either (1) or (2)"<<endl;
    cin>>opt;
    if(opt==1)
    {
        saving s;
        s.getacc();
        s.getbal();
    }
    else if(opt==2)
    {
        curr c;
        c.getacc();
        c.getbal();
    }
    else{
        cout<<"Invalid choice "<<endl;
        return 0;
    }
}