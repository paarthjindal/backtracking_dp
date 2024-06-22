#include <bits/stdc++.h>
using namespace std;


// after understanding the final recursie formual which we will get is 
// f(n)= sigma for all i f(i-1)*f(n-i )
int main()
{


    return 0;
}

class Solution {
public:
    int numTrees(int n) {
        // if(n<=1)
        // {
        //     return  1;
        // }
        // int ans=0;
        // // now will create all of them one by one as root nodes
        // for(int i=1;i<=n;i++)
        // {
        //     ans+=numTrees(n-i)*numTrees(i-1);
        // }
        // return ans;
        vector<int>dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int ans=0;
            for(int j=1;j<=i;j++)
            {
                ans+=dp[i-j]*dp[j-1];
            }
            dp[i]=ans;
            cout<<dp[i];
        }
        // cout<<dp[2];
        return dp[n];
        
    }
};