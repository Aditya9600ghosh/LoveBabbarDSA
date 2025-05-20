#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    // max-heap
    priority_queue<int> maxi;  // default priority queue gives always max heap
    
    //min-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(62);
    maxi.push(35);
    maxi.push(76);
    maxi.push(15);

    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(98);
    mini.push(53);
    mini.push(12);
    mini.push(43);
    mini.push(67);
    int n2 = mini.size();
    for(int i=0;i<n2;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"khali hai kya be = "<<mini.empty()<<endl;
    return 0;
}