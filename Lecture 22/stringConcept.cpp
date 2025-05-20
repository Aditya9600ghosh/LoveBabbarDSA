#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        while(i<j && !isalnum(s[i])) i++;
        while(i<j && !isalnum(s[j])) j--;

        if(tolower(s[i]) != tolower(s[j])){
            return false;
        }

        i++;
        j--;
    }
    return true;
}

void toUppercase(string &s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] - 'a' + 'A';
        }
        else{
            continue;
        }
    }
}

void toLowercase(string &s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
        else{
            continue;
        }
    }
}

void reverse(string &s){
    int i=0, j=s.size()-1;
    while(i<=j){
        swap(s[i++],s[j--]);
    }
}

int main(){
    
    string s;
    cout<<"Enter the String : ";
    getline(cin,s);

    if(checkPalindrome(s)){
        cout<<"Yes it's Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    // toUppercase(s);
    // cout<<"String in Uppercase = "<<s<<endl;
    
    // toLowercase(s);
    // cout<<"String in Lowercase = "<<s<<endl;

    // reverse(s);
    // cout<<"Reverse string will be : "<<s<<endl;

    return 0;
}