#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("result.txt");
    fout<<"India\n";
    fout<<"USA\n";
    fout<<"UK\n";
    fout.close();
    fout.open("result1.txt");
    cout<<"Delhi\n";
    cout<<"Washington\n";
    cout<<"London\n";
    fout.close();
    
}
