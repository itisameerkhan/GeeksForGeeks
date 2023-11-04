#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    bool isAnagram(string a, string b) {
        if(a.size() < b.size() || b.size() > a.size()) return false;
        // if(a.size() == 1 && b.size() == 1) {
        //     if(a[0] == b[0]) return true;
        //     else return false;
        // }
        int countA[26] = {0};
        int countB[26] = {0};
        for(int i=0;i<a.size();i++) countA[a[i] - 'a']++;
        for(int i=0;i<b.size();i++) countB[b[i] - 'a']++;
        for(int i=0;i<26;i++) {
            if(countA[i] != countB[i]) return false;
        }
        return true;
    }
};
int main() 
{
    string a,b;
    cin>>a;
    cin>>b;
    Solution sol;
    if(sol.isAnagram(a,b)) cout<<"TRUE";
    else cout<<"FALSE";
}