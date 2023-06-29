#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1,5,3,4,3,5,6};
    int size = 7;
    int copyArr[size];
    copy (arr, arr+size, copyArr);
    sort(copyArr,copyArr+size);

    vector<int> repeat(copyArr[size-1], 0);

    for(int i = 0; i<size-1; i++){
        if(copyArr[i] == copyArr[i+1]){
            repeat[copyArr[i]]++;
        }
    }

    for(int j = 0; j<size; j++){
        if(repeat[arr[j]] == 1){
            cout<<"First Repeating Element is "<<arr[j]<<endl;
            break;

        }
    }

}