// Passing Struct Pointers to Functions

/*
    When you pass a struct to a function by pointer, you're passing its memory address 
    — meaning the function can modify the original data
*/

#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
};


void updateAgeOfPerson(Person *p, int newAge){
    p->age = newAge;
}

int main(){

    Person person = {"Ankit", 27};

    updateAgeOfPerson(&person, 28); // passing pointer to function

    cout << person.age << endl;
    
    return 0;
}