#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int ctr = 0;
    for(int i=0; name[i]!='\0'; i++){
        ctr++;
    }
    return ctr;
}

int main(){
    char name[20];
    cout<<"Enter Name : ";
    cin>>name;

    // name[3] = '\0';

    cout<<"Your Name is : ";
    cout<<name<<endl;
    cout<<"Length = "<<getLength(name)<<endl;

    return 0;
}