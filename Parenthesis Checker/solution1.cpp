#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool ispar(string x)
    {
        stack<char> s;
        for(int i=0;i<x.size();i++) {
            if(x[i] == '(' || x[i] == '[' || x[i] == '{') {
                s.push(x[i]);
            } else {
                if(s.size() == 0) return false;
                if(x[i] == ')' && s.top() == '(') s.pop();
                else if(x[i] == '}' && s.top() == '{') s.pop();
                else if(x[i] == ']' && s.top() == '[') s.pop();
                else return false;
            }
        } 
        if(s.size() != 0) return false;
        return true;
    }
};
int main() 
{
    string x = "()";
    Solution sol;
    if(sol.ispar(x)) cout<<"TRUE";
    else cout<<"FALSE";
}