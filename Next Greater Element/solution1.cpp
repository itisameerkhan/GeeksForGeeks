#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n) {
        vector<long long> result(n,-1);
        stack<long long> s;
        for(int i=n-1;i>=0;i--) {
            while(!s.empty() && s.top() <= arr[i]) s.pop();
            if(!s.empty()) result[i] = s.top();
            s.push(arr[i]);
        }
        return result;
    }
};
int main() 
{
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    Solution sol;
    vector<long long> result = sol.nextLargerElement(arr,n);
    for(auto i: result) cout<<i<<" ";
}

