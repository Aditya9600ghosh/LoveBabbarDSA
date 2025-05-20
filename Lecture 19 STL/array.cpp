#include<iostream>
#include<array>
using namespace std;

int main(){
    // Sequence Containers

    // 1. array
    array<int,4> a = {1,2,3,4};

    int size = a.size();
    cout<<"Size of Array a = "<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 2nd index = "<<a.at(2)<<endl;

    // arrayName.empty() return bool value either 1 or 0
    cout<<"Array a is Empty or not : "<<a.empty()<<endl;

    cout<<"First Element = "<<a.front()<<endl;
    cout<<"Last Element = "<<a.back()<<endl;
    return 0;
}