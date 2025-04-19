#include <iostream>

using namespace std;

int main(){

    // Linear Search
    // Time Complexity: O(n)
    // Space Complexity: O(1)

    
    int num[] = {10, 202, 302, 3, 4, 1, 100, 105};

    int length = sizeof(num) / sizeof(num[0]);
    bool found = false;
    for (int i = 0; i < length; i++)
    {
        if(num[i] == 4){
            found = true;
            break;
        }            
    }

    if(found){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}   