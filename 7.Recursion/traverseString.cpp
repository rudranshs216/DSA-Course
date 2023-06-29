#include <iostream>
using namespace std;

bool present(string s, char c, int i){
    if(i>=s.length()){
        return false;
    }
    if(s[i] == c){
        return true;
    }
    return present(s,c,++i);
}

int main(){
    if(present("nihal",'k',0)){
    cout<<"mil gao";
    }
    else{
        cout<<"nhi milo";
    }
}