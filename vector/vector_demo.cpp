#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){

    vector<int> data = {5, 1, 4, 2, 8};

    data.push_back(13);

    sort(data.begin(),data.end());

    for(int num: data){
        cout << num << endl;
    }

    return 0;
}