#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    char s[30];
    ofstream of("result.txt");
    of<<"Welcome";
    of.close();
    cout<<"data saved\n";
    ifstream inf("result.txt");
    inf>>s;
    cout<<s;
    inf.close();
    return 0;
}