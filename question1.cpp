/*Implement a shape hierarchy consisting of a base class Shape and two derived classes Circle and Rectangle. The Shape class should have a pure virtual function calculateArea(), which calculates the area of the shape. Implement the Circle and Rectangle classes as derived classes of Shape. Circle should have a member variable for its radius, and Rectangle should have member variables for its length and width.

In your main() function, create an array of pointers to Shape objects containing both Circle and Rectangle objects. Use polymorphism to calculate and display the area of each shape in the array.

Remember to allocate memory dynamically for the objects and deallocate it to avoid memory leaks.
*/

#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double calculateArea() const = 0; // Pure virtual function
    // virtual ~Shape() {} // Virtual destructor
};

class Circle : public Shape {
private:
    double radius;

public:
    // Circle(double r) : radius(r) {}
    //we can write this line as----->

    Circle(double r)
    {
        radius=r;
    }

    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Rectangle(double l, double w) : length(l), width(w) {}
    //we can write this line as----->
Rectangle(double l,double w)
{
    length=l;
    width=w;
}
    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    const int numShapes = 3;
    Shape* shapes[numShapes];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(3.5);

    for (int i = 0; i < numShapes; ++i) {
        std::cout << "Shape " << i + 1 << " Area: " << shapes[i]->calculateArea() << std::endl;
    }

    // Deallocate memory to prevent memory leaks
    for (int i = 0; i < numShapes; ++i) {
        delete shapes[i];
    }

    return 0;
}
