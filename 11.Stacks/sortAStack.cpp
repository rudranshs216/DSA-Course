#include <iostream>
#include <stack>
using namespace std;

void sort(stack<int> &st, int& maxi, int i)
{
    if (st.size() - i == 0)
    {
        st.push(maxi);
        return ;
    }

    int data = st.top();
    maxi = max(data, maxi);
    cout<<"base case "<<data<<endl;
    st.pop();
    sort(st, maxi, i);
    if (data != maxi)
    {
        st.push(data);
    }
    // cout<<st.top()<<" ";
}

int main()
{
    stack<int> st;
    st.push(9);
    st.push(5);
    st.push(3);
    st.push(11);
    st.push(7);

    // int maxi = INT_MIN;
    // sort(st, maxi, 0);

    for (int i = 0; i < st.size(); i++)
    {
        int maxi = INT_MIN;
        sort(st, maxi, i);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}