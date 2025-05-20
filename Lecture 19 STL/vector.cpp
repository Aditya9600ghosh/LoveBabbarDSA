#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //Vector is a Dynamic Array
    vector<int> v;
    cout<<"Capacity of vector currently = "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of vector currently = "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector currently = "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity of vector currently = "<<v.capacity()<<endl; // kitna element ke liye space assign hua pda h
    cout<<"Size of vector = "<<v.size()<<endl;

    cout<<"Element at 1st index = "<<v.at(1)<<endl;

    cout<<"First Element = "<<v.front()<<endl;
    cout<<"Last Element = "<<v.back()<<endl;

    cout<<"Before POP"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.pop_back();
    cout<<"\nAfter POP"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Before clear operation"<<endl;
    cout<<"Capacity of vector currently = "<<v.capacity()<<endl;
    cout<<"Size of vector = "<<v.size()<<endl;
    v.clear();
    cout<<"After clear operation"<<endl;
    cout<<"Capacity of vector currently = "<<v.capacity()<<endl; // doesn't get affected by clear() operation
    cout<<"Size of vector = "<<v.size()<<endl;

    vector<int> a(6,1); // size is 6 & initialize each element with 1
    for(int it : a){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> copyVector(a); // vector a elements get copied in vector copyVector 
    for(int it : copyVector){
        cout<<it<<" ";
    }
    cout<<endl;

    auto it = find(v.begin(),v.end(),1); // find function returns an iterator
    int idx = it - v.begin();
    cout<<"Element 1 find at "<<idx<<endl;
    return 0;
}