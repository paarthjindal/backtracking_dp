#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimum(int a,int b)
    {
        if(a<b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    int solve(vector<int>&coins,int x,vector<int>&dp)
    {
        if(x==0)
        {
            return 0;
        }
        if(x<0)
        {
            return INT_MAX;
        }
        if(dp[x]!=-1)
        {
            return dp[x];
        }
        int min=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            int ans=solve(coins,x-coins[i],dp);
            if(ans!=INT_MAX)
            {
               min=minimum(min,1+ans);
            }

                       }               dp[x]=min;

        return min;
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int>dp(amount+1,-1);
        int ans=solve(coins,amount,dp);
        if(ans==INT_MAX)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};

// time complexity without memiozation its exponentioal but with it it is x*m
 
int main()
{

    return 0;
}
// now above was top down memioztion approach
// now another approach

int solvetab(vector<int>&num,int x)
{
    vector<int>dp(x+1,INT_MAX );
    dp[0]=0;
    for (int i = 1; i <= x; i++)
    {
        // we are tryinh to solve for every amojunt from 1 to x
        // now for each amoutn we have n coins 
        for(int j=0;j<num.size();j++)
        {
            if(x-num[j]>=0&&dp[x-num[j]]!=INT_MAX)
            {
                dp[i]=min(dp[i],1+dp[x-num[j]]);
            }
        }
    }
    return dp[x];
    
}