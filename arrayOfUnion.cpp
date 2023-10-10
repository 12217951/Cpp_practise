#include<iostream>
using namespace std;
//Deffine a union to hold different datatypes
union Data{
        int intValue;
        char charValue;
        double doubleValue;
};
int main()
{
    const int SIZE=5;
    Data dataArray[SIZE]; //Array  of unions to different data types
    //populate the array  with data
    dataArray[0].intValue= 42;
    dataArray[1].charValue= 'A';
    dataArray[2].doubleValue= 3.14;
    dataArray[3].intValue= 100;
    dataArray[4].charValue= 'Z';
    //Access and display the data from the array
    cout<<"Array of union:"<<endl;
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Index"<<i<<":";
        //Since a union can only hold one value ata atime,we need to know the type stored at each index
        if(i%3 == 0)
        {
            cout<<""
        }
    }

}