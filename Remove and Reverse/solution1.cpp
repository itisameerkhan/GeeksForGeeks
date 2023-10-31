#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeReverse(string s)
    {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++) m[s[i]]++;
        int flag=1;
        int start=0;
        int end = s.size()-1;
        char ch = s[start];
        while(start<end)
        {
            unordered_map<char,int>::iterator it = m.find(ch);
            if(it->second>1 && flag==1)
            {
                s[start]='0';
                it->second--;
                ch = s[end];
                start++;
                flag=0;   
            }
            else if(it->second>1 && flag==0)
            {
                s[end] = '0';
                it->second--;
                ch = s[start];
                end--;
                flag=1;
            }
            else if(flag==1) 
            {
                start++;
                ch = s[start];
            }
            else if(flag==0) 
            {
                end--;
                ch = s[end];
            }
        }
        if(flag==0) reverse(s.begin(),s.end());
        string ans = "";
        for(int i=0;i<s.size();i++) 
        {
            if(s[i]!='0')
            ans += s[i];
        }
        return ans;
    }
};

int main() {
    
}