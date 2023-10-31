#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void findPathHelper(vector<vector<int>> &maze,int n,int i,int j,string move,vector<string> &ans,vector<vector<int>> &visited)
    {
        if(i==n-1 && j==n-1) 
        {
            ans.push_back(move);
            return;
        }
        
        //downward
        if(i+1<n && !visited[i+1][j] && maze[i+1][j]==1)
        {
            visited[i][j]=1;
            findPathHelper(maze,n,i+1,j,move+"D",ans,visited);
            visited[i][j]=0;
        }
        //left
        if(j-1>=0 && !visited[i][j-1] && maze[i][j-1])
        {
            visited[i][j]=1;
            findPathHelper(maze,n,i,j-1,move+"L",ans,visited);
            visited[i][j]=0;
        }
        //right
        if(j+1<n && !visited[i][j+1] && maze[i][j+1]==1)
        {
            visited[i][j]=1;
            findPathHelper(maze,n,i,j+1,move+"R",ans,visited);
            visited[i][j]=0;
        }
        //up
        if(i-1>=0 && !visited[i-1][j] && maze[i-1][j]==1)
        {
            visited[i][j]=1;
            findPathHelper(maze,n,i-1,j,move+"U",ans,visited);
            visited[i][j]=0;
        }
    }
    vector<string> findPath(vector<vector<int>> &maze, int n) 
    {
        vector<vector<int>> visited(n,vector<int>(n,0));
        vector<string> ans;
        if(maze[0][0]==1) findPathHelper(maze,n,0,0,"",ans,visited);
        return ans;
    }
};

int main() {

}