 #include<iostream>
using namespace std;
class rectangle
{
    int l,b;
    public:
    rectangle(int a,int c):l(a),b(c){
        cout<<"Value of length: "<<a<<endl;
        cout<<"Value of breadth: "<<c<<endl;
        
    };
    int area()
    {
        int a=l*b;
        cout<<"Area is "<<a;
    }
};
int main()
{
   rectangle r1(2,4);
   r1.area();

}