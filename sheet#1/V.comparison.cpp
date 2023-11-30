#include<iostream>

using namespace std;

int main(){
     int a,b;
     char c;
     bool isRight = false;
     cin>>a>>c>>b;
     
     switch(c){
          case'<':
          if(a<b) isRight=true;
          break;
          case '>':
          if(a>b) isRight = true;
          break;
          case '=':
          if(a==b) isRight = true;
          break;
     }
     if(isRight) cout<<"Right";
     else cout<<"Wrong";
     
     return 0;
}