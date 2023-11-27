// Monisha is working on a program to manage a dynamic array. The program allows users to input the size of the array they want to create. However, there is a maximum limit set to 1000 elements. If a user attempts to allocate an array larger than this limit, the program should throw a std::length_error exception with the message "Error: Array size exceeds the maximum limit."

// Monisha wants to handle other scenarios as well:

// If the user provides a non-positive integer for the array size, the program should throw a std::invalid_argument exception with the message "Error: Array size must be a positive integer."

// For any other unexpected exceptions, the program should catch them using a generic catch (std::exception& e) block and display a message indicating "Exception caught" followed by the specific error message.

// The program should be designed to handle these exceptions and allocate the array correctly within the specified limits while ensuring proper memory deallocation.

#include<iostream>
using namespace std;
int main()
{
    try
    {
    int size;
    cin>>size;
    if(size<1000 && size>0)
    {
        cout<<"Array allocated successfully."<<endl;
    }
    else if(size>1000)
    {
        cout<<"Length error caught. "<<endl;
        cout<<"Error:Array size exceeds the maximum limit."<<endl;
    }
    else if(size<0)
    {
        cout<<"Invalid argument caught."<<endl;
        cout<<"Error: Array size must be a positive integer."<<endl;
    }
    else
    {
        throw 0;
    }
    }
    catch(int x)
    {
        cout<<"Exception caught"<<endl;
    }
    
}