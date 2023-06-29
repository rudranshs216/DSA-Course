#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter Number: ";
    cin>> n;

    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 0; j < n + i; j++)
        {
            if (i + j <= n-2)
            {
                cout << "  ";
            }
            else
            {
                if (k <= i + 1)
                {
                    cout << k << " ";
                    k++;
                }
                else
                {
                    cout << n + i - j << " ";
                }
            }
        }

        cout << endl;
    }
}