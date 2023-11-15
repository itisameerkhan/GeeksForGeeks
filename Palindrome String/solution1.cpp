#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int isPalindrome(string S)
	{
        int start = 0;
        int end = S.size() - 1;
        while(start < end) {
            if(S[start] != S[end]) return false;
            start++;
            end--;
        }
        return true;
	}

};
int main() {
    string s = "abba";
    Solution sol;
    if(sol.isPalindrome(s)) cout<<"TRUE";
    else cout<<"FALSE";
}