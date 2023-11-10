#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int print2largest(int arr[], int n) {
	    int max = INT_MIN;
        for(int i=0;i<n;i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        int secondMax = INT_MIN;
        for(int i=0;i<n;i++) {
            if(arr[i] > secondMax && arr[i] != max) {
                secondMax = arr[i];
            }
        }
        cout<<"first max -> "<<max<<" second max -> "<<secondMax<<endl;
        return secondMax;
	}
};
int main() {
    int n = 5;
    int arr[] = {1000,900,800,700,600};
    Solution sol;
    cout<<sol.print2largest(arr,n);
}