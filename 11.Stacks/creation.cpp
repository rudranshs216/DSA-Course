#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    int getTop()
    {
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack Empty"<<endl;
        }
    }
    int getSize()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
};
int main()
{
    Stack st(8);
    if(st.isEmpty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;

    }
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(30);
    st.push(30);
    st.push(30);
    st.push(40);
     if(st.isEmpty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;

    }
    cout<<st.getTop()<<endl;
    // st.pop();
    cout<<st.getTop()<<endl;
    cout<<st.getSize()<<endl;
}