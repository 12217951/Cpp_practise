#include<iostream>
using namespace std;
main()
{
    string s1("12345");
    string s2("abcde");
    cout<<s1<<" "<<s2<<endl;
    s1.insert(4,s2);
    cout<<s1<<endl;
    s1.erase(4,5);
    cout<<s1<<endl;
    s2.replace(1,3,s1);
    cout<<s2<<endl;
}