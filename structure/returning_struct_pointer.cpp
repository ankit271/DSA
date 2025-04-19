// Returning a Pointer to a Dynamically Allocated Struct
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
};

Student *createStudent(string name, int roll)
{
    Student *s = new Student;
    s->name = name;
    s->roll = roll;
    return s;
}

void printStudent(Student *s)
{
    cout << "Name: " << s->name << ", Roll No: " << s->roll << endl;
}

int main()
{
    Student *s1 = createStudent("Neha", 101);

    printStudent(s1);

    delete s1; // Clean up
}
