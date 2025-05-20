#include<iostream>
#include<map>
using namespace std;


// in map all keys are should be unique return sorted order
// while unorderd_map return original order
int main(){
    
    map<int,string> mp;

    mp[1] = "aditya";
    mp[23] = "tony";
    mp[12] = "steve";
    mp[5] = "natasha";

    mp.insert({7,"bruce"});

    for(auto it : mp){
        cout<<it.first<<":"<<it.second<<endl;
    }

    // count function in map also used to find key
    cout<<"Find 12 = "<<mp.count(12)<<endl;

    mp.erase(12); // only give key, complexity of erase, find, count, insert ki complexity O(log n) hoti hai
    cout<<"After Erase"<<endl;
    for(auto it : mp){
        cout<<it.first<<":"<<it.second<<endl;
    }

    auto j = mp.find(5);
    for(auto i = j; i!=mp.end(); i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}