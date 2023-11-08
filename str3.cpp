#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str1("lovely professional university");
   cout<<str1.find("ve")<<endl;
   cout<<str1.rfind("ve")<<endl;
   cout<<str1.find_first_of('l')<<endl;
   cout<<str1.find_last_of('l')<<endl;
    return 0;
}