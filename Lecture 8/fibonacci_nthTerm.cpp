#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int a;
    cin>>a;
    if(a==1){
        cout<<"The "<<a<<"st term of fibonacci series is = "<<fibo(a)<<endl;
    }
    else if(a==2){
        cout<<"The "<<a<<"nd term of fibonacci series is = "<<fibo(a)<<endl;
    }
    else if(a==3){
        cout<<"The "<<a<<"rd term of fibonacci series is = "<<fibo(a)<<endl;
    }
    else{
        cout<<"The "<<a<<"th term of fibonacci series is = "<<fibo(a)<<endl;
    }
}