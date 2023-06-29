#include <iostream>
using namespace std;

void quickSort(int arr[], int i, int e)
{
    if (i >= e)
    {
        return;
    }
    int count = 0;
    for (int k = i+1; k <= e; k++)
    {
        if (arr[i] > arr[k])
        {
            count++;
        }
    }
    swap(arr[i], arr[i + count]);
    int k = i;
    int j = e;
    while (k < i+count && j>i+count)
    {
        if (arr[k] < arr[i + count])
        {
            k++;
        }
        if (arr[j] > arr[i + count])
        {
            j--;
        }
        if ((arr[k] >= arr[i + count]) && (arr[j] >= arr[i + count]))
        {
            swap(arr[k], arr[j]);
            k++;
            j--;
        }
    }
    // for (k = i; k <= e; k++)
    // {
    //     cout << arr[k] << " ";
    // }
    // cout<<endl;
    if (i + count - 1 >= i)
    {

        quickSort(arr, i, i + count - 1);
    }
    else
    {
        quickSort(arr, i, i);
    }

    if (i + count + 1 <= e)
    {

        quickSort(arr, i + count + 1, e);
    }
    else
    {
        quickSort(arr, e, e);
    }
}

int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 30};
    int i = 0;
    int e = 6;
    quickSort(arr, i, e);
    for (i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
}