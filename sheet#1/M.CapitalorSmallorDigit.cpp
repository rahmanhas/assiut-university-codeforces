#include <bits/stdc++.h>
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    char a;
    cin>>a;
    int ascii = a;
    // cout<<isdigit(a)<<endl;
    if(isdigit(a)){
        cout<<"IS DIGIT"<<endl;
    }else{
        cout<<"ALPHA"<<endl;
        if(islower(a)>0){
        cout<<"IS SMALL"<<endl;
        }else cout<<"IS CAPITAL"<<endl;
    }
    
    return 0;
}