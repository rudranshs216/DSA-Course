#include <iostream>
#include <vector>
using namespace std;

void gP(int nO, int n, vector<string> &ans, string str)
{
    // string str = "";
    if (nO >= n || str.length() > n)
    {
        while (str.length() != n)
        {
            str.push_back(')');
        }
        ans.push_back(str);
        return;
    }
    str.push_back('(');
    nO++;
    gP(nO, n, ans, str);
    nO--;
    str.pop_back();
    if (nO != n)
    {
        str.push_back(')');
        gP(nO, n, ans, str);
        str.pop_back();
    }
}

int main()
{
    int n = 3;
    int count = 0;
    vector<string> ans;
    string str = "";
    gP(count, n, ans, str);
    bool canInsert = false;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}