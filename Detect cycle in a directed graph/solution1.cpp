#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool DetectGraph(int v,bool visited[],bool recStack[],vector<int> adj[])
    {
        if(!visited[v])
        {
            visited[v] = true;
            recStack[v] = true;
        }
        for(auto i: adj[v])
        {
            if(!visited[i] && DetectGraph(i,visited,recStack,adj))
            return true;
            else if(recStack[i])
            return true;
        }
        recStack[v]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
        bool visited[V];
        bool recStack[V];
        for(int i=0;i<V;i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }
        for(int i=0;i<V;i++)
        {
            if(!visited[i] && DetectGraph(i,visited,recStack,adj))
            return true;
        }
        return false;
    }
};

int main() {
    
}