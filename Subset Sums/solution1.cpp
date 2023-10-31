#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    void func(int index,int sum,vector<int> &sumSubset,vector<int> &arr,int N)
    {
        if(index==N)
        {
            sumSubset.push_back(sum);
            return;
        }
        func(index+1,sum+arr[index],sumSubset,arr,N);
        func(index+1,sum,sumSubset,arr,N);
    }
    vector<int> subsetSums(vector<int> &arr,int N)
    {
        vector<int> sumSubset;
        func(0,0,sumSubset,arr,N);
        sort(sumSubset.begin(),sumSubset.end());
        return sumSubset;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {5, 2, 1};
    vector<int> ans = s.subsetSums(arr,3);
    for(auto i: ans) cout<<i<<" ";
}
/*
Time complexity : O(2^n)+O(2^n log(2^n))
Space Complexity: O(2^n)
*/