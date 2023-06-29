#include <iostream>
#include <vector>
using namespace std;

int main (){
    int a[] = {2,3,7,3};
    int b[] = {1,3,7};

    vector<int> arr;
    arr.push_back(a[0]);

    for(int i =1; i<4; i++){
        int boo = 1;
        cout<<"Hi Bahar";
        for(int j = 0; j<arr.size(); i++){
            cout<<"Hi Ba";
            if(arr[j] == a[i]){
                boo =0;
                cout<<"Hi";
              }
        }
        if(boo == 1){
            arr.push_back(a[i]);
        }
    }
    
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}