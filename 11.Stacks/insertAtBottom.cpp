#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int data, int i)
{
    if (st.size() - i == 0)
    {
        st.push(data);
        return;
    }
    int num = st.top();
    st.pop();
    insertAtBottom(st, data, i);
    st.push(num);
}

int main()
{
    stack<int> st;
    st.push(11);
    st.push(32);
    st.push(27);
    st.push(15);
    st.push(5);

    // cout << st.top() << endl;

    for (int i = 0; i < st.size(); i++)
    {

        int data = st.top();
        st.pop();
        insertAtBottom(st, data, i);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}