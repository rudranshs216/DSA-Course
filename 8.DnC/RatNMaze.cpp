#include <iostream>
#include <vector>
using namespace std;

void ratInMaze(vector<string>& ans, int arr[][4], int visitedArr[][4], int r, int c, int tR, int tC, string path){
    if(r==tR && c==tC){
        cout<<path<<endl;
        ans.push_back(path);
        return ;
    }
    //Down
    if((arr[c+1][r] == 1) && (c+1<=3) && (visitedArr[c+1][r] == -2)){
          path.push_back('D');
          visitedArr[c+1][r] = -1; 
          ratInMaze(ans,arr,visitedArr,r,++c,tR,tC, path);
          c--;
          visitedArr[c+1][r] = -2;
          path.pop_back();
    }
    //Up
    if((arr[c-1][r] == 1) && (c-1>=0) && (visitedArr[c-1][r] == -2)){
          path.push_back('U');
          visitedArr[c-1][r] = -1;
          ratInMaze(ans,arr,visitedArr,r,--c,tR,tC, path);
          c++;
          visitedArr[c-1][r] = -2;
          path.pop_back();
    }
    //Left
    if((arr[c][r-1] == 1) && (r-1>=0) && (visitedArr[c][r-1] == -2)){
          path.push_back('L');
          visitedArr[c][r-1] = -1; 
          ratInMaze(ans,arr,visitedArr,--r,c,tR,tC, path);
          r++;
          visitedArr[c][r-1] = -2;
          path.pop_back();
    }
    //Right
    if((arr[c][r+1] == 1) && (r+1<=3) && (visitedArr[c][r+1] == -2)){
          path.push_back('R');
          visitedArr[c][r+1] = -1; 
          ratInMaze(ans,arr,visitedArr,++r,c,tR,tC,path);
          r--;
          visitedArr[c][r+1] = -2;
          path.pop_back();
    }
            // path.pop_back();

    if(!(((arr[c+1][r] == 1) && (c+1<=3) && (visitedArr[c+1][r] == -2))||((arr[c-1][r] == 1) && (c-1>=0) && (visitedArr[c-1][r] == -2))||((arr[c][r-1] == 1) && (r-1>=0) && (visitedArr[c][r-1] == -2))||((arr[c][r+1] == 1) && (r+1<=3) && (visitedArr[c][r+1] == -2)))){
        return ;

    }
}   

int main(){
    int arr[4][4] = {{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
    int visitedArr[4][4] = {{-1,-2,-2,-2},{-2,-2,-2,-2},{-2,-2,-2,-2},{-2,-2,-2,-2}};
    int tR = 3;
    int tC = 3;
    vector<string> ans;
    string path = "";

    ratInMaze(ans,arr,visitedArr,0,0,tR,tC,path);
    if(ans.size() == 0){
        cout<<"No Path";
    }

    // cout<<ans[0][0];

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }    
    //     cout << endl;
    // }

}