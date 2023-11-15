#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstRepeated(int arr[], int n) {
        unordered_map<int,int> map;
        for(int i=0;i<n;i++) map[arr[i]]++;
        for(int i=0;i<n;i++) if(map[arr[i]] > 1) return i + 1; 
        return -1;
    }
};
int main() {
    int n = 7;
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    Solution sol;
    cout<<sol.firstRepeated(arr,n);
}