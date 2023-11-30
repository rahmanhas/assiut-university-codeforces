#include<iostream>

using namespace std;

int main(){
     int a,b,c,x;
     char d,e;
     bool isRight = false;
     cin>>a>>d>>b>>e>>c;
     
     switch(d){
          case'+':
          x=a+b;
          if(a+b==c) isRight=true;
          break;
          case '-':
          x=a-b;
          if(a-b==c) isRight = true;
          break;
          case '*':
          x=a*b;
          if(a*b==c) isRight = true;
          break;
     }
     if(isRight) cout<<"Yes";
     else cout<<x;
     
     return 0;
}