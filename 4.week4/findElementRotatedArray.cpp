#include <iostream>
using namespace std;

int pivotElement( int arr[], int size){
    int s = 0;
    int e = size-1;

    while(s<=e){
        int mid = s + (e-s)/2;
        cout<<mid;
        if(mid+1 < size && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid] < arr[mid-1]){
            return mid-1;
        }
        if(arr[mid] >= arr[s]){
            s = mid+1;
        }
        else if (arr[mid] < arr[s]){
            e = mid-1;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int start, int end, int target){

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
            break;
        }
        else if (arr[mid] > target)
        {

            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main () {
    int arr[] = {4,3,2,1,0};
    // int target = 2;
    // cout<<BinarySearch(arr,0,4,target);

    int pivot = pivotElement(arr,5);
    cout<<"Pivot is: "<<pivot;

    // if(pivot == -1){
    //     cout<<BinarySearch(arr,0,1,target);
    // }


    // if( target >= arr[0] && target <= arr[pivot]){
    //     cout<<BinarySearch(arr,0,pivot,target);
    // }
    // else{
    //     cout<<BinarySearch(arr,pivot+1,1,target);
    // }
}