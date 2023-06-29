#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 7, 9, 11, 13, 15, 19};
    int start = 0;
    int end = 7;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == 7)
        {
            cout << mid;
            break;
        }
        else if (arr[mid] > 7)
        {

            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}