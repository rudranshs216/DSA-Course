#include <iostream>
using namespace std;

int firstOcc(int arr[], int target, int size){
    int s = 0;
    int e = size-1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            if(arr[mid-1] != target){
                 return mid;
            }
            else{
                e = mid-1;
            }

        }
        else if(arr[mid] > target){
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            cout<<"Not found";
            break;    
        }
    }
    return 0;
}
int LastOcc(int arr[], int target, int size){
    int s = 0;
    int e = size-1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            if(arr[mid+1] != target){
                 return mid;
            }
            else{
                s = mid+1;
            }

        }
        else if(arr[mid] > target){
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            cout<<"Not found";
            break;    
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1,3,4,4,4,4,4,6,7,9};
    cout<<firstOcc(arr,4,10)<<" "<<LastOcc(arr,4,10);
}