#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n) {
        
        long long  max = INT_MIN;
        long long current = 0;
        for(int i=0;i<n;i++) {
            current += arr[i];
            if(current > max) {
                max = current;
            }
            if(current < 0) current = 0; 
        }
        return max;
        
    }
};
int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    Solution sol;
    cout<<sol.maxSubarraySum(nums,n);
}