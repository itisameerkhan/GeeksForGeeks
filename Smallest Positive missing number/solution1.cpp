#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int missingNumber(int arr[], int n) 
    { 
        if(n == 0) return -1;
        long long value = 1;
        sort(arr, arr + n);
        int index = 0;
        while(arr[index] <= 0) ++index;
        for(int i=index;i<n;i++) {
            if(i > 0 && arr[i] == arr[i-1]) continue;
            if(arr[i] != value && arr[i] != arr[i-1]) {
                // cout<<"arr -> "<<arr[i]<<" index -> "<<i<<" value -> "<<value<<endl;
                return value;
            }
            if(arr[i] != arr[i-1]) value++;
        }
        return value;
    } 
};
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Solution sol;
    cout<<sol.missingNumber(arr,n);
}

/*
1 -2 0 -1 -2 1 -4 2 -3
-4 -3 -2 -2 -1 0 1 1 2

2 -2 0 -3 2 1 2 2 -2
-3 -2 -2 0 1 2 2 2 2
*/
