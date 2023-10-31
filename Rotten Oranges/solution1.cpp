#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    bool isSafe(int i,int j,vector<vector<int>> &v)
    {
        if(i>=0 && j>=0 && i<v.size() && j<v[0].size()) return true;
        return false;
    }
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        // Code here
        bool changed = false;
        int k = 2;
        while(true)
        {
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[0].size();j++)
                {
                    if(grid[i][j]==k)
                    {
                        if(isSafe(i,j-1,grid) && grid[i][j-1]==1)
                        {
                            grid[i][j-1] = grid[i][j]+1;
                            changed=true;
                        }
                        if(isSafe(i,j+1,grid) && grid[i][j+1]==1)
                        {
                            grid[i][j+1] = grid[i][j]+1;
                            changed=true;
                        }
                        if(isSafe(i-1,j,grid) && grid[i-1][j]==1)
                        {
                            grid[i-1][j] = grid[i][j]+1;
                            changed=true;
                        }
                        if(isSafe(i+1,j,grid) && grid[i+1][j]==1)
                        {
                            grid[i+1][j] = grid[i][j]+1;
                            changed = true;
                        }
                    }
                }
            }
            if(!changed) break;
            changed = false;
            k++;
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1) return -1;
            }
        }
        return k-2;
    }
};

int main() {
    
}