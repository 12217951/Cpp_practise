// Help Julie to write a program to handle array operations gracefully using exception handling. The program takes an integer as input, representing the size of an array, and prints the same in the output.
// -If the input is a non-positive number, it should display "Exception caught. Array size should be a positive number." and terminate gracefully.

// -If the input is zero, it should display "Exception caught. Array is empty." and terminate gracefully.

// -If the input is positive, the program dynamically allocates memory for the array, takes integer elements as input, and prints them separated by spaces.

// -If any runtime error occurs during array processing, it should catch and display the exception message as "Exception caught. <error_message>". Ensure proper memory deallocation to avoid memory leaks.
// Note: This kind of question will be helpful in clearing CTS recruitment.

// Input format :

// The first line of input consists of the size of the array, n.

// The second line of input consists of n space-separated elements.

// Output format :

// The output displays the array of elements separated by a space.

// If the size is either zero or a negative integer, the output displays the appropriate error message.
// Refer to the sample outputs for the formatting specifications.

// Code constraints :

// Array size <= 105

// Sample test cases :
// Input 1 :
// 7
// 3 -36 15 35 -6 42 8
// Output 1 :
// 3 -36 15 35 -6 42 8 
// Input 2 :
// 0
// Output 2 :
// Exception caught. Array is empty.
// Input 3 :
// -5
// Output 3 :
// Exception caught. Array size should be a positive number.


#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    try
    {
    if(size>0)
    {
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        throw 0;
    }
    }
    catch(int x)
    {
        if(size<0)
        {
            cout<<"Exception caught.Array size should be a positive number. "<<endl;
        }
        else if(size==0)
        {
            cout<<"Exception caught.Array is empty."<<endl;
        }
    }
}