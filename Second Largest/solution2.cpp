#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int print2largest(int arr[], int n) {
	    int max = -1, secondMax = -1;
        for(int i=0;i<n;i++) {
            if(arr[i] > max) {
                secondMax = max;
                max = arr[i]; 
            } else if(arr[i] > secondMax && arr[i] < max) {
                secondMax = arr[i];
            }
        }
        return secondMax;
	}
};
int main() {
    int n = 5;
    int arr[] = {1000,900,800,700,600};
    Solution sol;
    cout<<sol.print2largest(arr,n);
}