#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void mark(vector<vector<char>> &grid,int i,int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        if(i<0 || j<0 || i>=n || j>=m ||  grid[i][j]=='0') return;
        
        grid[i][j] = '0';
        
        mark(grid,i,j-1);
        mark(grid,i,j+1);
        mark(grid,i-1,j);
        mark(grid,i+1,j);
        mark(grid,i-1,j-1);
        mark(grid,i+1,j+1);
        mark(grid,i-1,j+1);
        mark(grid,i+1,j-1);
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    mark(grid,i,j);
                }
            }
        }
        return count;
    }
};

int main() {
    
}