#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

/*
Bubble Sort is a simple comparison-based sorting algorithm.
It works by repeatedly swapping adjacent elements if they are in the wrong order.alignas
It's not efficient for large datasets
*/
void bubbleSort(vector<int>&arr){

    int len = arr.size();
    bool swapped;

    for (int i = 0; i < len; i++){
        
        swapped = false;
        for(int j = 0 ; j < len - i - 1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
        for (auto num : arr){

            cout << num << " ";
        }
        cout << endl;
    }
}

int main(){

    vector<int> data = {5, 1, 4, 2, 8};
    bubbleSort(data);
    
    for (auto num : data)
    {
        cout << num << " ";
    }
}
