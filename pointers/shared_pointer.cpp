#include <iostream>
#include <memory>

using namespace std;

void shared_pointer_impl()
{

    shared_ptr<int> ptr(new int(10));
    shared_ptr<int> ptr2;

    cout << "ptr: " << *ptr << endl;

    ptr2 = ptr; // transafer the ownership of the pointer

    cout << ptr.use_count() << endl;
    cout << ptr2.use_count() << endl;
    ptr.reset();

    cout << ptr.use_count() << endl;
    cout << ptr2.use_count() << endl;
    cout << ptr.get() << endl;
    cout << ptr2.get() << endl;
}

int main()
{
    shared_pointer_impl();
    return 0;
}