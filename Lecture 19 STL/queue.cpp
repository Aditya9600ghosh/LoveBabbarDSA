#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("tony");
    q.push("steve");
    q.push("thor");

    cout<<"size before pop "<<q.size()<<endl;
    
    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;

    return 0;
}