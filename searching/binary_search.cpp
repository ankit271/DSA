#include <iostream>

using namespace std;


// data should be sorted in ascending order

int binarySearch(int arr[],int len , int target){
    int left = 0;
    int right = len - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Target not found
}

int main(){

    int nums[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
   
    int length = 10;
    int target = 75;

    int index = binarySearch(nums,length,target);

    cout << index;
}