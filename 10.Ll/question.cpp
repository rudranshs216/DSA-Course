#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "I   love      your   pussy   ii";

    int i = 0;
    int j = 1;

    vector<string> str;
    while (j <= s.length())
    {
        while (s[i] == ' ')
        {
            i++;
        }

        if (s[j] == ' ' || j == s.length())
        {
            string ans = s.substr(i, j - i);
            str.push_back(ans);
            i = j + 1;

            j = i + 1;
        }
        j++;
    }
    int index = -1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i].length() % 2 == 0 && index < 0)
        {
            index = i;
        }
        if (str[i].length() > str[index].length() && str[i].length() % 2 == 0)
        {
            index = i;
        }
    }
    if (index < 0)
    {
        cout << "Nothing" << endl;
    }
    else
    {

        cout << str[index];
    }
}