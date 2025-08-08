#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq; // can insert or remove from both front & back end

    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    for(int it : dq){
        cout<<it<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(int it : dq){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"Print the First index element = "<<dq.at(1)<<endl;

    cout<<"Front = "<<dq.front()<<endl;
    cout<<"Rear = "<<dq.back()<<endl;

    cout<<"Check DeQueue is empty or not : "<<dq.empty()<<endl;




    // Erase Function in C++ complexity O(n)
    cout<<"Before Erase Size = "<<dq.size()<<endl;

    dq.erase(dq.begin()+1); // delete the index 1 element
    
    cout<<"After Erase Size = "<<dq.size()<<endl;
    return 0;
}