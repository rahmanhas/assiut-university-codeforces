#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int lastTwoDigit(long long x){
    int p = (x/10%10)*10+x%10;
    return p;
}
int secondDigit(int x){
    int p = x%10;
    return p;
}
int firstDigit(int x){
    int p = x/10%10;
    return p;
}
int main() {
    
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    int p = lastTwoDigit(a)*lastTwoDigit(b)*lastTwoDigit(c)*lastTwoDigit(d);
    
    cout<<firstDigit(p)<<secondDigit(p)<<endl;
    
    return 0;
}