#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double n;
    cin>>n;
    int x = floor(n);
    if(x!=n){
        cout<<"float "<<x<<" "<<n-x<<endl;
    } else{
        cout<<"int "<<x<<endl;

    }
    
    return 0;
}