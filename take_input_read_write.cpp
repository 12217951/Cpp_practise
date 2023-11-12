#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char s[30];
    int rollno,fee;
    string inp1;
    cout<<"Enter Name: ";
    cin>>inp1;
    cout<<"Enter rollno: ";
    cin>>rollno;
    cout<<"Enter fee : ";
    cin>>fee;
    ofstream fout("student.txt");
    fout<<rollno<<"\t"<<inp1<<"\t"<<fee;
    fout.close();
    ifstream fin("student.txt");
    fin>>rollno>>inp1>>fee;
    fin.close();
    cout<<endl<<rollno<<"\t"<<inp1<<"\t"<<fee;
    return 0;
}