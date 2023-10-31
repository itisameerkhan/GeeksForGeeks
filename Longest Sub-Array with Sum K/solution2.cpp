#include<bits/stdc++.h>
using namespace std;

class Solution{  
    public:
    int lenOfLongSubarr(int arr[],  int N, int K) 
    { 
        int left=0,right=0, maxLen=0;
        long long sum = arr[0];
        while(right < N) {
            while(left <= right && sum > K) {
                sum -= arr[left];
                left++;
            }
            if(sum == K) {
                maxLen = max(maxLen, right - left + 1);
            }
            right++;
            if(right < N) {
                sum += arr[right];
            }
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
A[] = {10, 5, 2, 7, 1, 9}
K = 15
Output : 4

Space Complexity -> O(N) 
Time Complexity -> O(2N)
*/