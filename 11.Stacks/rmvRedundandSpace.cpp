#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s = "((a+b)+c)";
    stack<char> st;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        if(!st.empty() && (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'))
        {
            if(st.top() == '('){
            st.pop();
            }
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}