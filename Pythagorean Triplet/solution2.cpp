#include<bits/stdc++.h>
using namespace std;

class Solution{ // *FAILED CODE*
public:
	bool checkTriplet(int arr[], int n) {
        unordered_map<int,int> map;
        for(int i=0;i<n;i++) map[arr[i]]++;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                int p = sqrt(arr[i] * arr[i] + arr[j] * arr[j]);
                float q = sqrt(arr[i] * arr[i] + arr[j] * arr[j]);

                if(p == q && map[p] != 0) return true;
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
    if(sol.checkTriplet(arr,n)) cout<<"TRUE";
    else cout<<"FALSE";
}

/*
3 2 4 6 5 

9 4 16 36 25

4 9 16 25 36 
*/