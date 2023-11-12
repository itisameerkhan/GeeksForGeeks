#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int left = 0, right = 0;
        long long sum = 0;
        while(left <= right) {
            sum += arr[right];
            if(sum == s) return vector<int>{left+1,right+1};
            else if(sum < s) right++;
            else if(sum > s) {
                sum -= arr[left];
                left++;
            }
        }
        return vector<int>{-1,-1};
    }
};
int main() {
    vector<int> arr = {1,2,3,7,5};
    int n = 5;
    long long s = 12;
    Solution sol;
    vector<int> result = sol.subarraySum(arr,n,s);
    for(auto i: result) cout<<i<<" ";
}