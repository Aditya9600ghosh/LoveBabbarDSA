#include<iostream>
#include<set> 
// stores unique element
// implementation using BST, you can't modify the element after insert
// return sorted order of elements
// unordered_set is faster than set
using namespace std;

int main(){
    set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(4); // insert operation complexity O(log n)
    s.insert(8);
    s.insert(7);

    for(auto it : s){
        cout<<it<<" ";
    }cout<<endl;




// s.erase(s.begin()+1); set uses a bidirectional iterator, not a random-access iterator like vectors.

// either use next() from the <iterator> header instead of + 
s.erase(next(s.begin(), 1));

// or you can first setup the iterator on index 1
// set<int>::iterator it = s.begin();
// it++;
// s.erase(it);
//     for(auto it : s){
//         cout<<it<<" ";
//     }cout<<endl;


// count() tells whether the element is present or not in the set
    cout<<"6 is present or not -> "<<s.count(6)<<endl;

// find function also returns the iterator
// this find function used in set is different from C++ STL find(first,last,value)
    set<int>::iterator itr = s.find(5);
    cout<<"Value present at itr = "<<*itr<<endl;
    for(auto j = itr; j!=s.end();j++){
        cout<<*j<<" ";
    }cout<<endl;

    return 0;
}