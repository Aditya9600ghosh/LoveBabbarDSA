#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<=15;i+=2){
        cout<<i<<" ";

        if( i&1 ){ // check whether i is odd or not
            continue; // skip the iteration and move to next iteration
        }
        
        i++;
    }
}