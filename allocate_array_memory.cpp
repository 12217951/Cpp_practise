#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *arr;
    int size;
    cout<<"\n Enter the size of integer array: ";
    cin>>size;
    cout<<"\n Creating an array of size "<<size;
    arr=new int [size];
    if(arr==NULL)
    {
        cout<<"\n Problem in memory alloacation ";
        exit(1);
    }
    else{
        cout<<"\n Dynamic alloaction of memory for array arr is successful"<<endl;
        cout<<"Enter the array elements :"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>*(arr+i);
        }
        cout<<"\n Entered elements are: ";
        for(int i=0;i<size;i++)
        {
            cout<<"\n"<<*(arr+i);
        }
    }
    delete []arr;
    cout<<"\n Memory deallocated ";
    return 0;
}
