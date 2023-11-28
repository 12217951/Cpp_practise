// You have been asked to create a program that calculates the sum of digits for a three-digit number provided by the user. The program should handle exceptional situations when the input number is not a valid three-digit number. Print the sum if it is a three-digit number, else print the error message.

// Input format :

// The input consists of a positive integer.

// Output format :

// The output prints the sum of the given positive number.

// If the given number is not a three-digit number or negative integer, the output throws the message.

// Code constraints :

// The input should be a positive three-digit number.

// Sample test cases :
// Input 1 :
// 567
// Output 1 :
// Sum of the digits is 18
// Input 2 :
// 1234
// Output 2 :
// It's not a three digit Number or valid number
// Input 3 :
// -88
// Output 3 :
// It's not a three digit Number or valid number


// You are using GCC
#include<iostream>
using namespace std;
int main()
{
    try
    {
        int n;
        cin>>n;
        if(n>=100 && n<1000)
        {
            int sum=0;
            while(n>0)
            {
                int rem=n%10;
                sum+=rem;
                n/=10;
            }
        
        cout<<"Sum of the digits is "<<sum<<endl;
        }
            else
            {
                throw 0;
            }
        
    }
    catch(int x)
    {
        cout<<"It's not a three digit Number or valid number"<<endl;
    }
}