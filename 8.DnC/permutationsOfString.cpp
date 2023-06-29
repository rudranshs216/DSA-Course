#include <iostream>
#include <vector>
using namespace std;

void permutations(string s,string perString, vector<string>& ans){
    if(perString.length() == s.length()){
        ans.push_back(perString);
        return ;
    }
    for(int i = 0; i<s.length(); i++){
        bool present = false;
        for(int j = 0; j<perString.length(); j++){
            if(s[i] == perString[j]){
                present = true;
            }
        }
        if(!present){
            perString.push_back(s[i]);
            permutations(s,perString,ans);
            perString.pop_back();
        }

    }
}

int main(){
    string s = "abc";
    string perString = "";
    vector<string> ans;
    permutations(s,perString,ans);
    for(auto i: ans){
        cout<<i<<" ";
    }

}