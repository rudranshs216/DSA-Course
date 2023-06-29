#include <iostream>
#include <string>
#include <vector>
using namespace std;

void placeNQueen(int numQueen,int n, vector<vector<int> > &arr, int j, vector<string> fullAns, vector<vector<string> > &fullyFullAns)
{
    if (numQueen == 0)
    {
        fullyFullAns.push_back(fullAns);
        return;
    }

    string ans = "";
    bool placeNhiKhali = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][j] == 0)
        {
            for (int l = 0; l < i; l++)
            {
                ans.push_back('.');
            }
            ans.push_back('Q');
            for (int l = i + 1; l < n; l++)
            {
                ans.push_back('.');
            }
            placeNhiKhali = false;
            for (int k = 0; k < n; k++)
            {
                arr[i][k] += 1;
                arr[k][j] += 1;
            }
            int k = i + 1;
            int l = j + 1;
            while (k < n && l < n)
            {
                arr[k][l] += 1;
                k++;
                l++;
            }
            k = i - 1;
            l = j + 1;
            while ((k >= 0) && l < n)
            {
                arr[k][l] += 1;
                k--;
                l++;
            }
            arr[i][j] += 2;
            fullAns.push_back(ans);

            placeNQueen(--numQueen,n, arr, ++j, fullAns, fullyFullAns);

            fullAns.pop_back();
            j--;
            numQueen++;
            ans.erase();

            placeNhiKhali = true;
            arr[i][j] -= 2;
            for (k = 0; k < n; k++)
            {
                arr[i][k] -= 1;
                arr[k][j] -= 1;
            }
            k = i + 1;
            l = j + 1;
            while (k < n && l < n)
            {
                arr[k][l] -= 1;
                k++;
                l++;
            }
            k = i - 1;
            l = j + 1;
            while ((k >= 0) && l < n)
            {
                arr[k][l] -= 1;
                k--;
                l++;
            }
        }
    }
    if (placeNhiKhali)
    {
        return;
    }
}

int main()
{
    // int arr[n][n] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    int n = 4;
    vector<vector<int> > arr(n,vector<int>(n,0));
    vector<string> fullAns;
    vector<vector<string> > fullyFullAns;
    placeNQueen(n, n,arr, 0, fullAns, fullyFullAns);
    for (int i = 0; i < fullyFullAns.size(); i++)
    {
        for (int j = 0; j < fullyFullAns[0].size(); j++)
        {
            cout << fullyFullAns[i][j] << " ";
        }
        cout << endl;
    }
}