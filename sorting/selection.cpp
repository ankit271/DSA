/*

Finding the minimum element in the unsorted part.
Swapping it with the first element of the unsorted part
Moving the boundary of the sorted part one element to the right.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void selectionSort(vector<int> &arr){

    int len = arr.size();

    for(int i = 0; i < len ; i++){

        int minIndex = i;

        for(int j = i + 1; j < len; j++){

            if(arr[j] < arr[minIndex]){                
                minIndex = j;
            }
        }

        if(minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }

    for(int num : arr)
        cout << num << " ";
}


int main(){

    vector<int> data = {20, 12, 5, 1, 17};

    selectionSort(data);
}