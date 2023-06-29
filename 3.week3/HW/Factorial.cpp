#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num = 10;
    vector<int> fac;
    fac.push_back(1);
    int j = 0;
    int x = 0;
    int carry = 0;
    for(int i = 2; i<=num; i++){
        while(j<fac.size()){
            x = fac[j]*i + carry;
            fac[j] = x%10;
            carry = x/10;
            j++;
        }
        if(carry){
            fac.push_back(carry);
        }
        carry = 0;
        j = 0;
}
reverse(fac.begin(), fac.end());
    for( int e : fac){
        cout<<e<<" ";
    }
}