#include<bits/stdc++.h>
using namespace std;

class Solution
{   
    public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here 
        if(n ==1)
        {
            return matrix[0][0];
        }
        else if(n==2)
        {
            return (matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0]);
        }
        
        else
        {
            int ans = 0;
            for (int i = 0; i<n; i++)
            {
                vector<vector<int>> temp;
                for(int j =1;j<n;j++)
                {
                    vector<int> tem;
                    for(int k =0;k<n; k++)
                    {
                        if(k==i)
                        {
                            continue;
                        }
                        else
                        {
                            tem.push_back(matrix[j][k]);
                        }
                    }
                    
                    temp.push_back(tem);
                }
                
                if(i%2==0)
                {
                    ans+=matrix[0][i]*determinantOfMatrix(temp,n-1);
                }
                
                else if(i%2!=0)
                {
                    ans-=matrix[0][i]*determinantOfMatrix(temp,n-1);
                }
            }
            
            return ans;
        }
        
    }
};

int main() 
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    Solution sol;
    cout<<sol.determinantOfMatrix(matrix,3);
}