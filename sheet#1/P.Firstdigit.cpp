#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int a = s[0]-48;
    if(a%2==0){
        cout<<"EVEN"<<endl;
    } else{
        cout<<"ODD"<<endl;

    }
    
    return 0;
}