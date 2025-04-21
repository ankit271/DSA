#include <iostream>
#include <memory>

using namespace std;


void weak_pointer_impl(){

    shared_ptr<int> ptr (new int(10));
    weak_ptr<int> ptr2 = ptr;

    cout << *ptr << " " << *ptr2.lock() << endl; // lock() returns a shared_ptr 
    ptr2.reset(); // reset the weak pointer

    cout << ptr.use_count() << endl;
    cout << ptr2.use_count() << endl; // use_count() returns the number of shared_ptrs that own the object
}

class A{
    public:
        shared_ptr<B> p1; // weak_ptr<B>p1;

        void set_prt(shared_ptr<B> &p)
        {
            p1 = p;
        }

    ~A(){
        cout << "A destructor" << endl;
    }
    
};

class B{
    public:
        shared_ptr<A> p1; // weak_ptr<A> p1;
        void set_prt(shared_ptr<A> &p)
        {
            p1 = p;
        }

    ~B()
    {
        cout << "B destructor" << endl;
    }
};

void f1(){
    shared_ptr<A> p1(new A());
    shared_ptr<B> p2(new B());

    p1->set_prt(p2);
    p2->set_prt(p1); // circular reference
    cout << p1.use_count() << endl; // 1
}

int main(){

   // weak_pointer_impl();
    f1(); // this will cause memory leak because of circular reference
    // use weak_ptr to break the circular reference
    return 0;
}