#include <iostream>
#include <vector>
using namespace std;

void reachTarget(int arr[],int t, int& mini, int steps){
    if(t == 0){
        // cout<<steps<<" ";
        mini = min(mini,steps);
    }
    if(t < 0){
        return ;
    }
    steps = steps+1;
    for(int i = 0; i<5; i++){
        reachTarget(arr,t-arr[i],mini,steps);
    }

}
void reachTarget2(int arr[],int t, int& maxi, int steps){
    if(t == 0){
        // cout<<steps<<" ";
        maxi = max(maxi,steps);
    }
    if(t < 0){
        return ;
    }
    steps = steps+1;
    for(int i = 0; i<3; i++){
        reachTarget2(arr,t-arr[i],maxi,steps);
    }

}

int main(){
    int arr[] = {2,3,1};
    int t = 21;
    int maxi = INT_MIN;
    int steps = 0;
    reachTarget2(arr,t,maxi,steps);
    cout<<maxi;

   

}