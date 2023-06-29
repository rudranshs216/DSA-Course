#include <iostream>
using namespace std;

int main () {
    int arr[] = {10,3,40,20,50,80,70};
    int n = 7;
    int target = 40;
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s<=e){
        mid = s + (e-s)/2;

        if(arr[mid] == target){
            cout<<mid ;
            break;
        }
        else if (arr[mid] < target){
            if(mid+1 < n && arr[mid+1]<=target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        else{
            if(mid-1 >= 0 && arr[mid-1] >= target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
    }
}