#include <iostream>
using namespace std;

int main () {
    int num = 11;
    int div = 2;

    int arr[num];
    for(int i = 1; i<=num; i++){
        arr[i-1] = i;
    }

    int s = 0;
    int e = num-1;

    int ans;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]*div == num){
            ans = arr[mid];
            break;
        }
        if(arr[mid]*div < num){
            ans = arr[mid];
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    int p = 3;
    double step = 0.1;
    double finalAns = ans;

    for(int i = 0; i<p; i++){
        for(double j = finalAns; j*div <= num ; j = j+step){
            finalAns = j;
        }
        step = step/10;
    }
    cout<<finalAns;
}
