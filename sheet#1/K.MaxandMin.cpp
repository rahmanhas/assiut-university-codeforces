#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int a,b,c,min,max;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            max=a;
            if(b>c) min=c;
            else min = b;
        } else{
            max = c;
            min = b;
        }
    }
    else {
        if(b>c){
            max = b;
            if(a>c){
                min = c;
            }else {
                min = a;
            }
            }else{
                max = c;
                min = a;
            }
        }
    
    cout<<min<< " "<<max<<endl;
    return 0;
}