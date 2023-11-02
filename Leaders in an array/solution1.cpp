#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> leaders(int arr[], int n) {
        vector<int> result;
        int max = -1;
        for(int i=n-1;i>=0;i--) {
            if(arr[i] >= max) {
                max = arr[i];
                result.push_back(arr[i]);
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
int main() 
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Solution sol;
    vector<int> result = sol.leaders(arr,n);
    for(auto i: result) cout<<i<<" ";
}