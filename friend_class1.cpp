#include<iostream>
using namespace std;
class GFG{
    private:
    int private_variable;

    protected:
    int protected_variable;
    
    public:
    GFG()
    {
        private_variable = 10;
         protected_variable = 99;
    }
    //friend class declaration
friend class F;

};
class F{
    public:
    void display(GFG & t)
    {
        cout<<"The value of private variable = "<<t.private_variable<<endl;
        cout<<"The value of protected variable = "<<t.protected_variable<<endl;
    }
};
int main()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}


//..............output........
// The value of private variable = 10  
// The value of protected variable = 99