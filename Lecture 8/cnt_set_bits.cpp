#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int rem = 0;
    int ctr = 0;
    while(n>0){
        rem = n % 2;
        if(rem==1){
            ctr++;
        }
        n = n / 2;
    }
    return ctr;
}

int main(){
    int a, b;
    cin>>a;
    cin>>b;
    int sum = countSetBits(a) + countSetBits(b);
    cout<<"Total Set Bits = "<<sum<<endl;
    return 0;
}