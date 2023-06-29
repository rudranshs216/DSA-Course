#include <iostream>
#include <vector>
using namespace std;

int main (){
    int num = 2;
    int arr[] = {1,2};

    int s = 0;
    int e = num-1;

    while(s<e){
        int mid = s + (e-s)/2;
        if(mid+1 < num && (arr[mid+1]*arr[mid+1] > num && arr[mid]*arr[mid] < num)){
            cout<<arr[mid];
            break;
        }
         if(arr[mid]*arr[mid] > num){
            e = mid-1;
         }
         else{
            s = mid;
         }
    }
}