#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time)
    {
        vector<int> ans;
        for(int i=0;i<N;i++)
        {
            int x = abs((pos[i]-cur)*time[i]);
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};
int main() {
    int N = 3,cur=4;
    vector<int> pos = {1,5,6};
    vector<int> time = {2,3,1};
    Solution sol;
    cout<<sol.minimumTime(N,cur,pos,time);
}