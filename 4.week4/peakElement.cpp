#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 10, 50, 60, 70,80};

    int s = 0;
    int e = 5;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if ((mid != 0))
        {

            if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
            {
                cout << "Element is " << arr[mid];
                break;
            }
            else if ((arr[mid] > arr[mid + 1]) && (arr[mid] < arr[mid - 1]))
            {
                e = mid - 1;
            }
            else if ((arr[mid] < arr[mid + 1]) && (arr[mid] > arr[mid - 1]))
            {
                s = mid + 1;
            }
        }
        else{
            if(arr[mid] > arr[mid+1]){
                cout << "Element is " << arr[mid];
                break;
            }
            else{
                cout << "Element is " << arr[mid+1];
                break;
            }
        }
    }
}