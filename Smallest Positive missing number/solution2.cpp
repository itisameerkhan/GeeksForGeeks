#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int missingNumber(int arr[], int n) 
    { 
        if(n == 0) return -1;
        int value = 1;
        sort(arr, arr + n);
        int index = 0;
        int temp = 0;
        while(arr[index] <= 0) index++;
        while(find(arr + index + temp, arr + n, value) != arr + n) {
            temp = value;
            value++;
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

