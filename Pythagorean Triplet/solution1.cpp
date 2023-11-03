#include<bits/stdc++.h>
using namespace std;

class Solution{ // *FAILED CODE*
public:
	bool checkTriplet(int arr[], int n) {
        for(int i=0;i<n;i++) arr[i] = arr[i] * arr[i];
        sort(arr, arr + n);
        for(int i=n-1;i>=2;i--) {
            int start = 0;
            int end = i - 1;
            while(start < end) {
                if(arr[start] + arr[end] == arr[i]) return true;
                (arr[start] + arr[end] < arr[i]) ? start++ : end--;
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