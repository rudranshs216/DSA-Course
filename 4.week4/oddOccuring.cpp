#include <iostream>
using namespace std;

int main () {
    int arr[] = {1,1,2,2,5};

    int s = 0;
    int e = 4;

    while(s<e){
        int mid  = s+ (e-s)/2;
        if( (mid-1 >=0 && arr[mid-1] != arr[mid]) && (mid+1 <=4 && arr[mid] != arr[mid+1])){
            s = mid;
            break;
        }
        if( mid % 2 == 0){
            if(mid+1 <=4 && arr[mid] == arr[mid+1]){
                s = mid+2;
            }
            else{
                e = mid;
            }

        }
        else{
            if(mid-1 >=0 && arr[mid] == arr[mid-1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }

        }
    }
    cout<<arr[s]<<endl;

    int ans = 0;

    // for(int i = 0; i<13; i++){
    //     ans = ans ^ arr[i];

    // }
    // cout<<ans<<endl;

}