#include <iostream>
using namespace std;
int main() {
    char c,d;
    cin>>c;
    int ascii = c;
    
    if(ascii<91){
        d = ascii+32;
        
    } else{
        
        d = ascii-32;
    }
    cout<<d<<endl;
    return 0;
}