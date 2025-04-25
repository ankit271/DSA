#include <iostream>
#include <vector>
#include <stack>
#include <algorithm> 

using namespace std;

int main(){

     stack<int> s;

     s.push(1);
     s.push(10);
     s.push(100);
     s.push(1000);

     while (!s.empty())
     {
         std::cout << s.top() << " ";
         s.pop();
     }

     // vector<int> data = {5, 1, 4, 2, 8};

     // data.push_back(13);

     // sort(data.begin(),data.end());

     // for(int num: data){
     //     cout << num << endl;
     // }

     return 0;
}