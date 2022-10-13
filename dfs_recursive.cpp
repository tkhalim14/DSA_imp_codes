#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recurr(vector<vector<char>>& grid,int i,int j){
        if(i<0 || j<0 || i==grid.size() || j==grid[0].size() || grid[i][j]=='0'){
            return ;
        }
        grid[i][j]='0';
        recurr(grid,i+1,j);
        recurr(grid,i,j+1);
        recurr(grid,i-1,j);
        recurr(grid,i,j-1);
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    recurr(grid,i,j);
                }
            }
        }
        return count;
    }
};