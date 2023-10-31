#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	    void make_permutation(string s,vector<string> &v,int start,int end)
	    {
	        if(start==end) v.push_back(s);
	        else 
	        {
	            for(int i=start;i<=end;i++)
	            {
	                swap(s[start],s[i]);
	                make_permutation(s,v,start+1,end);
	                swap(s[start],s[i]);
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> v;
		    make_permutation(S,v,0,S.size()-1);
		    set<string> s;
		    for(auto i: v) s.insert(i);
		    v.clear();
		    for(auto i: s) v.push_back(i); 
		    return v;
		}
};

int main() {
    
}