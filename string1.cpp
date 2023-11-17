#include<iostream>
using namespace std;
main()
{
    string s1("12345");
    string s2("abcde");
    s1.append(s2);
    cout<<s1<<endl;

    s1.append(s2,1,2);
    cout<<s1;

}