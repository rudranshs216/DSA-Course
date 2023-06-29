#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ar1[] = {5, 5, 5} ;
    int ar2[] = {5, 5, 5, 5, 10} ;
    int ar3[] = {5, 5, 5, 20} ;
    int s1 = sizeof(ar1) / sizeof(int);
    int s2 = sizeof(ar2) / sizeof(int);
    int s3 = sizeof(ar3) / sizeof(int);

    vector<int> common;

    int p1 = 0, p2 = 0, p3 = 0;

    while (p1 < s1 || p2 < s2 || p3 < s3)
    {
        if((ar1[p1] == ar2[p2]) && (ar2[p2] == ar3[p3]))
        {
            common.push_back(ar1[p1]);
            p1++;
            p2++;
            p3++;
        }
        if(ar1[p1] > ar2[p2]){
            p2++;
        }
        else if(ar1[p1] < ar2[p2]){
            p1++;
        }
        else{
            p3++;
        }
    }
    for(int i = 0; i<common.size(); i++){
        cout<<common[i]<<" ";
    }
}