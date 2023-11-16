#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        // Your code here
        if(s.size() != t.size()) return false;
        vector<char> freq(255);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]] = t[i];
        }
        for(int i=0;i<t.size();i++)
        {
            if(freq[s[i]] != t[i]) return false;
        }

        for(int i=0;i<s.size();i++)
        {
            freq[t[i]] = s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            if(freq[t[i]] != s[i]) return false;
        }
        
        return true;
    }
};
int main() {
    string s = "add";
    string t = "egg";
    Solution sol;
    if(sol.areIsomorphic(s,t)) cout<<"TRUE";
    else cout<<"FALSE";
}