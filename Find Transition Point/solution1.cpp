#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        for(int i=0;i<n;i++) {
            if(arr[i] == 1) return i;
        }
        return -1;
    }
};
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Solution sol;
    cout<<sol.transitionPoint(arr,n);
}
