#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nums[] = {2,0,1};
    int i = 0;
    int e = 2;

    while (i < e)
    {
        if (nums[e] == 0 && nums[i] != 0)
        {
            swap(nums[e], nums[i]);
            i++;
            e--;
        }
        if (nums[e] != 0)
        {
            e--;
        }
        if (nums[i] == 0)
        {
            i++;
        }
    }
    for(i = 0; i< 3; i++){
        if(nums[i] != 0){
            break;
        }
    }
    e = 2;

    while (i < e)
    {
        if (nums[e] == 1 && nums[i] != 1)
        {
            swap(nums[e], nums[i]);
            i++;
            e--;
        }
        if (nums[e] != 1)
        {
            e--;
        }
        if (nums[i] == 1)
        {
            i++;
        }
    }

    for(int j = 0; j<3; j++){
        cout<<nums[j]<<" ";
    }
}
