#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    bool findTriplets(int arr[], int n)
    { 
        sort(arr, arr + n);
        for(int i=0;i<n-2;i++) {
            int start = i + 1;
            int end = n - 1;
            while(start < end) {
                if(arr[i] + arr[start] + arr[end] == 0) return true;
                else if(arr[i] + arr[start] + arr[end] < 0) start++;
                else if(arr[i] + arr[start] + arr[end] > 0) end--;
            }
        }
        return false;
    }
};
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Solution sol;
    if(sol.findTriplets(arr,n)) cout<<"TRUE";
    else cout<<"FALSE";
}