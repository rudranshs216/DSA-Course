#include <iostream>
using namespace std;

int main (){
    int arr[] = {3,4,5,6,7,1,2};
    int s = 0;
    int e = 6;

    while (s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] > arr[mid+1]){
            cout<<"The Element is: "<<arr[mid];
            break;
        }
        if(arr[mid-1] > arr[mid]){
            cout<<"The Element is: "<<arr[mid-1];
            break;
        }
        if(arr[s] > arr[mid]){
            e = mid-1;
        }
        else if ( arr[s] < arr[mid]){
            s = mid+1;
        }
    }


}