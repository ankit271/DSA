// allocate memory dyanmically

#include <iostream>

using namespace std;


struct Student {
    string name;
    int age;
};

int main() {

    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    Student * std = new Student[n];

    for(int i =0; i < n; i++){
        cout << "Enter name of student " << i+1 << ": ";
        cin >> std[i].name;

        cout << "Enter age of student " << i + 1 << ": ";
        cin >> std[i].age;
    }

    cout << "\nStudent List:\n";
    for (int i = 0; i < n; ++i) {
        cout << std[i].name << " (" << std[i].age << " years old)\n";
    }

    delete[] std;
}