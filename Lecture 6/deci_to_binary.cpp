#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int ans=0,i=0;
    while(n>0){
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans; // for printing the reverse order of bits
        n  = n>>1; // right shift
        i++;
    }
    cout<<"Binary Equivalent -"<<ans<<endl;
}