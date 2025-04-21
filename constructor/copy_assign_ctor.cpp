/*
    Copies the contents from one existing object to another existing object
*/
#include <iostream>

using namespace std;

class CopyAssignment
{
    int data;

public:
    CopyAssignment(int val) : data(val) {}

    // Copy Assignment Operator
    CopyAssignment &operator=(const CopyAssignment &other)
    {
        std::cout << "Copy assignment operator called\n";
        if (this != &other)
        { // Prevent self-assignment
            data = other.data;
        }
        return *this;
    }
};

int main()
{
    CopyAssignment obj1(10); // Normal constructor
    CopyAssignment obj2(20); // Normal constructor

    obj2 = obj1; // Copy assignment operator called

    return 0;
}