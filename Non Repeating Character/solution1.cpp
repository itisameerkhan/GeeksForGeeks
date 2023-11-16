#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    char nonrepeatingCharacter(string S)
    {
       unordered_map<char, int> map;
       for(int i=0;i<S.size();i++) map[S[i]]++;
       for(int i=0;i<S.size();i++) if(map[S[i]] == 1) return S[i];
       return '$';
    } 
};
int main() {
    string S = "hello";
    Solution sol;
    cout<<sol.nonrepeatingCharacter(S);
}