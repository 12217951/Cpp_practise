#include<iostream>
using namespace std;
int main()
{
    int *p=NULL;
    p=new int ;
    /*
     if(!p)
    {
        cout<<"\n Memory allocation failure";
        exit(1);
    }*/
    if(p==NULL)
    {
        cout<<"\n Memory allocation failure";
        exit(1);
    }
    else{
        cout<<"\n Memory allocated";

        *p=12;
        cout<<"\nInteger value stored is "<<*p;
        delete p;  //deallocate memory
        cout<<"\n Memory deallocated ";
    }
    return 0;
}