#include <iostream>
#include <vector>
using namespace std;

void subSequences(string s, int i, string str, vector<string>& ans){
    if(i>= s.length()){
       ans.push_back(str);
       return;
    }
    subSequences(s,++i,str, ans);
    --i;
    str.push_back(s[i]);
    subSequences(s,++i, str, ans);
}

int main(){
    string s = "abc";
    string str = "";
    vector<string> ans;
    subSequences(s,0,str, ans);
    for(auto i: ans){
        cout<<i<<endl;
    }

}