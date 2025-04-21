#include <iostream>

using namespace std;

void unique_pointer_impl(){

    unique_ptr<int> ptr (new int(10));
    unique_ptr<int> ptr2;

    cout << "ptr: " << *ptr << endl;

    ptr2 = move(ptr); // transafer the ownership of the pointer

    if(ptr == nullptr){
        cout << "ptr is null" << endl;
    }
    else{
        cout << "ptr2: " << *ptr2 << endl;
    }
}


int main(){

    unique_pointer_impl();

    return 0;
}