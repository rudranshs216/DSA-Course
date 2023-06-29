#include <iostream>
using namespace std;

int waysToClimb(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    return waysToClimb(n-1) + waysToClimb(n-2);
}

int main(){
    cout<<waysToClimb(3);
}