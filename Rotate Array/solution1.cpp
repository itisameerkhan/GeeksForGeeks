#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    void rotateArr(int arr[], int n, int d) {
        d = d % n;
        reverse(arr, arr + d);
        reverse(arr + d, arr + n);
        reverse(arr, arr + n);
    }

};
int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;
    Solution sol;
    sol.rotateArr(arr,n,d);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}