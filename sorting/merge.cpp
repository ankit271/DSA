#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;

    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] >= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;    
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx= 0; idx < temp.size(); idx++){
        arr[idx+start] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int start, int end){

    if(start < end){        
        
        int mid = start + (end-start)/2;

        mergeSort(arr, start, mid);  // left
        mergeSort(arr, mid+1, end);  // right

        merge(arr, start, mid, end);
    }
}


int main(){

    vector<int> data = {15,10,11,6,9,2,14};

    mergeSort(data,0,data.size()-1);

    for(int val : data){
        cout << val << " ";
    }

    return 0;
}