// Bibin Bala is working on a class that represents a geometric shape, particularly a circle. He ensures that the circle's radius should always be positive. To address situations where the user tries to set a negative radius, Bibin Bala plans to utilize exception handling in the C++ class concept by throwing a custom exception named NegativeRadiusException.

// Input format :

// The input consists of the radius of a circle (double).

// Output format :

// The output displays the radius of the circle.

// If the radius is a negative value, the output displays an error message indicating that a negative radius value is not allowed.
// Refer to the sample outputs for the formatting specifications.

// Code constraints :

// Radius of the circle <= 105

// Sample test cases :
// Input 1 :
// 50.25
// Output 1 :
// Radius set successfully: 50.25
// Input 2 :
// 0
// Output 2 :
// Exception caught.Error: Radius cannot be negative or zero.
// Input 3 :
// -89
// Output 3 :
// Exception caught.Error: Radius cannot be negative or zero.


#include<iostream>
using namespace std;
int main()
{//NegativeRadiusException
    try{
        double r;
        cin>>r;
        if(r>0)
        {
            cout<<"Radius set successfully: "<<r;
        }
        else if(r<=0)
        {
            cout<<"Exception caught.Error: Radius cannot be negative or zero.";
        }
        else
        {
            throw(r);
        }
    }
    catch(int r)
    {
        cout<<"Radius cannot be negative or zero ";
    }
}