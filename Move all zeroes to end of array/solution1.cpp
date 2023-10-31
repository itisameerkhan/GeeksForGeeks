#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int index=0;
        for(int i=0;i<n;i++) {
            if(arr[i] != 0) {
                arr[index++] = arr[i];
            }
        }
        for(int i=index;i<n;i++) arr[i] = 0;
	}
};

int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    Solution sol;
    sol.pushZerosToEnd(nums,n);
    for(int i=0;i<n;i++) cout<<nums[i]<<" ";
}