/*Random Access
allow direct access to specific record
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myFile;
    ifstream file;
    char ch[30];
    char text;
    cout<<"Enter some text here: "<<endl;
    cin.getline(ch,30);

    myFile.open("output.txt",ios::out);
    if(myFile)
    {
        myFile<<ch;
        cout<<"Data store successfully: \n\n"<<endl;
    }
    else{
        cout<<"Error while opening file"<<endl;
        myFile.close();
    }
    file.open("input.txt",ios::in);
    if(file)
    {
        file.seekg(7,ios::beg);
        cout<<"The output after skipping first 7 bytes is: ";
        while(file.eof())
        {
            file.get(text);
            cout<<text;      
              }
    }
    else{
        cout<<"Error while opening file: "<<endl;
        file.close();
    }

}
