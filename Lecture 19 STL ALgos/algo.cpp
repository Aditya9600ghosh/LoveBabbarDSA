#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(3);
    v.push_back(21);
    v.push_back(27);
    v.push_back(233);

    // binary_search returns 1 or 0
    cout<<"Finding 21 using binary search - "<<binary_search(v.begin(),v.end(),21)<<endl;

    //lower_bound returns iterator
    cout<<"Lower Bound = "<<lower_bound(v.begin(),v.end(),21) - v.begin()<<endl;
    cout<<"Upper Bound = "<<upper_bound(v.begin(),v.end(),21) - v.begin()<<endl;

    int a = 5;
    int b = 6;
    cout<<"Max = "<<max(a,b)<<endl;
    cout<<"Min = "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a = "<<a<<endl;

    string s = "abcde";
    reverse(s.begin(),s.end());
    cout<<"Reverse String = "<<s<<endl;


    cout<<"Before Rotate"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(), v.begin()+1, v.end()); // syntax rotate(first, mid, last)  Rotating vector 1 place to right such that element at index 1 becomes first element
    cout<<"After Rotate"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    // sort function is based on intro sort which is combination of 3 algorithms quick sort, heap sort & insertion sort
    sort(v.begin(),v.end());
    return 0;
}