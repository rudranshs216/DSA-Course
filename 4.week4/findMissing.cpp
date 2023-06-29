#include<iostream>
using namespace std;

int missing(int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        mid = s + (e-s)/2;
        cout<<mid<<endl;
        if(arr[mid] == mid+1){
            s = mid+1;
        }
        else if(arr[mid] != mid+1){
            e= mid-1;
        }
    }
    return arr[s]-1;
}

int main(){
    int arr[] = {1,2,3,4,5,7,8};

    cout<<missing(arr,7);
}