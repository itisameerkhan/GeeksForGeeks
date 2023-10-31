#include<bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
  public:
    string mark(vector<vector<int>> &grid,int i,int j,string s)
    {
        if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size() && grid[i][j]==1)
        {
            grid[i][j]=0;
            s += mark(grid,i,j-1,"L");
            s += mark(grid,i,j+1,"R");
            s += mark(grid,i-1,j,"U");
            s += mark(grid,i+1,j,"D");
        }
        return s;
    }
    int countDistinctIslands(vector<vector<int>>& grid)
    {
        unordered_map<string,int> m;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    string s = mark(grid,i,j,"");
                    m[s]++;
                }
            }
        }
        return m.size();
    }
};

int main() {
    
}