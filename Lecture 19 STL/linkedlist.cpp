#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> li;

    li.push_back(20);
    li.push_back(34);
    li.push_front(6);

    list<int> li2(li); // copy list li to li2

    list<int> n(5,100); // 5 elemnts initialize with 100 each

    for(int i : li){
        cout<<i<<" ";
    }
    return 0;
}