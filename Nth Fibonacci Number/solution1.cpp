#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthFibonacci(int n){
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2;i<=n;i++) {
            dp[i] = (dp[i-1] + dp[i-2]) % 1000000007;
            cout<<dp[i]<<endl;
        }
        return dp[n];
    }
};
int main() 
{
    int n = 14521;
    Solution sol;
    cout<<sol.nthFibonacci(n);
}