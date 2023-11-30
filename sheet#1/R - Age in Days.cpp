#include<iostream>
using namespace std;
int main(){
     int x;
     cin>>x;
     int year = x/365;
     int dayAfterYear = x%365;
     int month = dayAfterYear/30;
     int dayAfterMonth = dayAfterYear%30;
     cout<<year<<" years"<<endl<<month<<" months"<<endl<< dayAfterMonth<<" days"<<endl;
     return 0;
}