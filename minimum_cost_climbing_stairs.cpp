#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// for climbing stairs at start at 0 index
//  we have two possibility either to climb 1 stair or two stair 
// so no of ways to reach from 0 stair is equla to no of ways to reach staris from 1 stair + from 2 stairs
// ie f(0)=f(1)+f(2)
// now for two base cases if(i==n)  ie we have reached the stair then return 1 cause we have just one way 
// also for ovrefolwo if (i>n) then no way so return 0
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
int solve(vector<int>&cost,int n,vector<int>&dp)
{
    // base case
    if(n==0)
    {
        return cost[0];
    }
    if(n==1)
    {
        return cost[1];
    }
    // step 3
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    //step 2
    dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    return dp[n];

}
int mincost(vector<int>&cost)
{
    int n=cost.size();
    vector<int>dp(n+1,-1);
    int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
}
int main()
{


    return 0;
}

/*
  now solve using bottom up approach ie tabular form
  int solve3(vector<int>&cost,int a)
  {
    step 1 createion of dp
    vector<int>dp(n+1,-1);
    // now look for base case of 1 and 0
    dp[0]=cost[0]
    dp[1]=cost[1]
    for(int i=2;i<=n;i++)
    
    {
    dp[i]=cost[i]+min(of n-1 and n-2)
    }
    return min(of n-1 and n-2)
  }
*/

// similary just use two variable for the next part 
