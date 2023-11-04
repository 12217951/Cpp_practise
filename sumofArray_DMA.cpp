#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *arr,sum=0;
    int size;

    cout<<"\n Enter the size of integer array ";
    cin>>size;

    cout<<"\n creating an array of size"<<size;
    arr=new int [size];

    if(arr==NULL)
    {
        cout<<"\n Problem in memory alloaction ";
        exit(1);
    }
    cout<<"\n Enter array elements ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];

    }
    cout<<"\n Sum of elements of array is : "<<sum;
    delete[]arr;
    return 0;
}
