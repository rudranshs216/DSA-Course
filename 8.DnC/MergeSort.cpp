#include <iostream>
#include <vector>
using namespace std;

void mergeTwoSorted(int arr[], int i, int mid, int e)
{
    int *left = new int[mid - i + 1];
    int *right = new int[e - mid];
    for (int j = i; j <= mid; j++)
    {
        left[j] = arr[j];
        // cout<<left[j]<<" ";
    }
    for (int j = mid + 1; j <= e; j++)
    {
        right[j] = arr[j];
        // cout << right[j] << " ";
        // cout << arr[j] << " ";
    }

    int j = 0;
    int m = 0;
    int k = i;
    while (m <= mid - i && j <= e - mid - 1)
    {
        if (left[m] < right[j])
        {
            arr[k] = left[m];
                        cout<<"arr[k] ="<<arr[k]<<endl;

            k++;
            m++;
        }
        else
        {
            arr[k] = right[j];
            cout<<"arr[k] ="<<right[j]<<endl;
            k++;
            j++;
        }
    }
    while (m <= mid - i)
    {
        arr[k] = left[m];
        k++;
        m++;
    }
    while (j <= e - mid - 1)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
    //  for(int l = 0; l<=3; l++){
    //     cout<<arr[l]<<" ";
    //  }
    cout << endl;
}

void mergeSort(int arr[], int i, int e)
{
    int mid = i + (e - i) / 2;
    if (i == e)
    {
        return;
    }
    mergeSort(arr, i, mid);
    mergeSort(arr, mid + 1, e);
    // for(int l = 0; l<3; l++){
    //     cout<<arr[i]<<" ";
    //  }
    //  cout<<endl;

    mergeTwoSorted(arr, i, mid, e);
}

int main()
{
    int arr[] = {37, 27, 43, 3};
    mergeSort(arr, 0, 3);
    // for(auto i: arr){
    //     cout<<i<<" ";
    // }
}