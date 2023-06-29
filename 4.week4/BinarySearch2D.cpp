#include <iostream>
using namespace std;

int main (){
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    int rows = 5;
    int cols = 4;
    int target = 20;

    int s = 0;
    int e = rows*cols-1;

    while (s<=e){
        int mid = s + (e-s)/2;
        if (arr[mid/cols][mid%cols] == target){
            cout<<"Index is: "<<mid/cols<<" , "<<mid%cols<<endl;
            break;
        }
        else if(arr[mid/cols][mid%cols] > target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
}