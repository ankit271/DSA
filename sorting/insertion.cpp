
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void insertionSort(vector<int> &arr){
    
    int len = arr.size();

    for(int i = 0 ; i < len; i++){

        for(int j = i; j < len; j++){
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(auto i : arr){
        cout << i << " ";    
    }
}

int main(){

    vector<int> data = {7,0,2,1,8,3};

    insertionSort(data);    
}
