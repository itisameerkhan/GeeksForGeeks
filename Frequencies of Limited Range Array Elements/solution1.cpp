#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P) { 
        map<int, int> m;
        for(auto i: arr) m[i]++;
        for(int i=0;i<arr.size();i++) {
            if(m.find(i+1) != m.end()) arr[i] = m[i+1]; 
            else arr[i] = 0;
        }
    }
};
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int p; cin>>p;
    Solution sol;
    sol.frequencyCount(arr,n,p);
    for(auto i: arr) cout<<i<<" ";
}