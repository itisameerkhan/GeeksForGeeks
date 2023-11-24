#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<vector<long long>> output(n);
        for(int i=0;i<n;i++)
        {
            output[i].resize(i+1,1);
            for(int j=1;j<i;j++)
            {
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }
        }
        return output[n-1];
    }
};
int main()
{
    int n=4;
    Solution sol;
    vector<long long> ans = sol.nthRowOfPascalTriangle(n);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
}