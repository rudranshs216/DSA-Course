#include <iostream>
#include <vector>
using namespace std;

void maxSum(vector<int> &arr, int i, int sum, int &maxi)
{
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }
    // Exclude
    maxSum(arr, i = i + 1, sum, maxi);
    i--;
    // Include
    sum = sum + arr[i];
    maxSum(arr, i = i + 2, sum, maxi);
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(9);
    arr.push_back(4);
    int sum = 0;
    int maxi = INT_MIN;
    maxSum(arr, 0, sum, maxi);
    cout << maxi;
}