/*
Creates a new object as a copy of an existing object.

When it's called:
    Passing an object by value.
    Returning an object by value.
    Initializing an object with another of the same type.

*/
#include <iostream>
using namespace std;

class CopyClass
{
    int data;

public:
    CopyClass(int val) : data(val) {}

    // Copy Constructor
    CopyClass(const CopyClass &other)
    {
        data = other.data;
        std::cout << "Copy constructor called\n";
    }
};

int main()
{
    CopyClass obj1(10); // Normal constructor
    CopyClass obj2 = obj1; // Copy constructor called

    return 0;
}
