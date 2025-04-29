#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){

    queue<int> q;

    q.push(10);
    q.push(20);

    int a = 20;
    int b = 30;
    swap(a,b);
    cout << a << endl;
    cout << b << endl;
}
