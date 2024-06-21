#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//for each element we have got two choices either to include or exclude it 
// if we include it thne we need to move two indices else we need to move one indices
int solve(vector<int>&nums,int n,vector<int>&dp)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return nums[0];
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int inc=nums[n]+solve(nums,n-2,dp);
    int exc=solve(nums,n-1,dp);
    dp[n]= max(inc,exc); 
    return dp[n];
}
int main()
{
     vector<int>nums;
     int n=nums.size();

 return 0;   
}

// now solve using tabulationo
// just follow threee steps

int solve (vector<int>& arr)
{
    int n=arr.size();
    vector<int>dp(n,0);
    dp[0]=arr[0];
    for(int i=0;i<n;i++)
    {
        int inc=dp[i-2]+arr[i];
        int exc=dp[i-1];
        dp[i]=max(inc,exc);
    }
    return dp[n];
}
// similary could be done by space optimixaiton since we have jsut i-2 and i-1 constains so we can ake two varialbes
// 