#include<iostream>
using namespace std;

class rectangle
    {
        public:
        int l,b;
        rectangle()
        {
            l=5,b=6;
        }
        void area()
        {
            cout<<l*b;
        }

    };
    int main()
    {
        rectangle r;
        r.area();
    
    return 0;
    }
