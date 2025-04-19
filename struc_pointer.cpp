#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};


int main() {

    /*
        Person person = {"John", 30};

        Person* ptr = &person; // Pointer to structure

        cout << "Name: " << ptr->name << endl;

        cout << "Age: " << (*ptr).age << endl;
    */

    Person* ptr = new Person; // Dynamically allocate memory for structure

    ptr->name = "John"; 
    ptr->age = 30;

    cout << "Name: " << ptr->name << " Age: " << ptr->age << endl ;

    delete ptr; // free allocated memory
    return 0;
}