#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rowE = 3;
    int colE = 3;
    int rowS = 0;
    int colS = 0;

    int RI = 0;
    int CI = 0;

    while(RI == 1 && CI==1){
        while(RI == rowS && CI < colE){
            cout<<arr[RI][CI]<<" ";
            CI++;
        }
        rowS++;
        RI = rowS;
        CI = colE;
        while(CI == colE && RI > rowE){
          cout<<arr[RI][CI]<<" ";
          RI++;
        }
        colE--;
        RI = rowE;
        CI = colE-1;
        while(RI == rowE && CI >= colS){
        cout<<arr[RI][CI]<<" ";
          CI--;

        }
        rowE--;
        RI = rowE-1;
        CI = colS;
        while(CI == colS && RI >= rowS){
            cout<<arr[RI][CI]<<" ";
          RI--;

        }
        colS++;
        RI = rowS;
        CI = colS;
    }

   
}