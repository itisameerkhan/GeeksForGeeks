#include<bits/stdc++.h>
using namespace std;

class Solution{  
    public:
    int lenOfLongSubarr(int arr[],  int N, int K) 
    { 
        long long maxLen=0, sum=0;
        map<int,int> lastSum;
        for(int i=0;i<N;i++) {
            sum += arr[i];
            if(sum == K) {
                if(i+1 > maxLen) maxLen = i + 1; 
            }
            long long rem = sum - K;
            if(lastSum.find(rem) != lastSum.end()) {
                int len = i - lastSum[rem];
                if(len > maxLen) maxLen = len;
            }
            if(lastSum.find(sum) == lastSum.end()) lastSum[sum] = i;
        }
        return maxLen;
    } 
};
int main() {
    int n,k; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>k;
    Solution sol;
    cout<<sol.lenOfLongSubarr(arr,n,k);
}

/*
Space Complexity -> O(N Log(N)) {for map<int,int>}
Time Complexity -> O(n)
*/