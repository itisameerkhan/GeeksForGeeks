#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    vector<int> djikstra(int V,vector<vector<int>> adj[],int S)
    {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> distance(V);
        for(int i=0;i<V;i++) distance[i] = 1e9;

        distance[S] = 0;
        pq.push({0,S});

        while(!pq.empty())
        {
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it: adj[node])
            {
                int edgeWeight = it[1];
                int adjNode = it[0];

                if(dis + edgeWeight < distance[adjNode])
                {
                    distance[adjNode] = dis + edgeWeight;
                    pq.push({distance[adjNode],adjNode});
                }
            }
        }
        return distance;
    }
};
int main()
{
    Solution sol;
    int V=3;
    vector<vector<int>> adj[V] {{{1, 1}, {2, 6}}, {{2, 3}, {0, 1}}, {{1, 3}, {0, 6}}};
    int S=2;
    vector<int> output = sol.djikstra(V,adj,S);
    for(auto i: output) cout<<i<<" ";
}