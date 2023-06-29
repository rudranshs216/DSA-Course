#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s = "ngzodrdohhqilovouwqrbpgqvlplsnfzueemmjtqnizodigfzeuuezfgidozinqtjmmeeuzfnslpvqgpbrqwuovoliqhhodirdozgn";
    int i = 0;
    int e = s.length() - 1;

    int count = 0;

    while (i < e)
    {
        if (s[i] == s[e])
        {
            i++;
            e--;
        }
        else
        {
            if ( (e-i >1 ) && (e > 0 && i < s.length() - 1) && (s[i] == s[e - 1] && s[i + 1] == s[e]))
            {
                string s1 = s.substr(i + 1, e - i);
                string s2 = s.substr(i, e - i);
                string r1 = s1;
                reverse(s1.begin(), s1.end());
                string r2 = s2;
                reverse(s2.begin(), s2.end());
                if (r1 == s1 || r2 == s2)
                {
                    count ++;
                    break;
                }
                else
                {
                    count = 2;
                    break;
                }
            }
            else if (e > 0 && s[i] == s[e - 1])
            {
                i++;
                e = e - 2;
                count++;
            }
            else if ((i < s.length() - 1) && s[i + 1] == s[e])
            {
                i = i + 2;
                e = e - 1;
                count++;
            }
            else
            {
                count++;
                e--;
            }
        }
    }
    cout<<count;
}