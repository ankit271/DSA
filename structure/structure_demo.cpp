/*

Features:
    Struct pointer to function
    Array of structs
    Dynamic memory allocation

*/

#include <iostream>
using namespace std;

struct Employee
{
    string name;
    float salary;
};

void giveRaise(Employee *e, float percent)
{
    e->salary += e->salary * (percent / 100);
}

void displayEmployees(Employee *eArr, int size)
{
    cout << "\nEmployees:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << eArr[i].name << " earns ₹" << eArr[i].salary << endl;
    }
}

int main()
{
    int n;
    cout << "How many employees? ";
    cin >> n;

    Employee *empArr = new Employee[n]; // Dynamic array of structs

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter name and salary for employee " << i + 1 << ": ";
        cin >> empArr[i].name >> empArr[i].salary;
    }

    // Give all employees a 10% raise
    for (int i = 0; i < n; ++i)
    {
        giveRaise(&empArr[i], 10); // Pass pointer to each element
    }

    displayEmployees(empArr, n);

    delete[] empArr; // Clean up
}
