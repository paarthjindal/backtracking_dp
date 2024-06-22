# include <bits/stdc++.h>
using namespace std;

// question such that nothing apperas at its corrrect indexb


// formula f(n)=(n-1)*(f(n-1)+f(n-2))
// at start for each element we ahve n-1 choiices to keep it so after placeing we have two choics
// either we swap the elemnt or not 
int dearangement(int n)
{
    if(n==1)
    {
        // cause if just one elemetn we cant apply any deaarangement
        return 0;
    }
    if(n==2)
    {
        // two base cases
        return 1;
    }
    int ans=(n-1)*(dearangement(n-1)+dearangement(n-2));
    return ans;
}
int main()
{ 

    return 0;
}

// now applay some memoization
int solve(int n,vector<int>&dp)
{
    if(n==1)
    {
        // cause if just one elemetn we cant apply any deaarangement
        return 0;
    }
    if(n==2)
    {
        // two base cases
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=(n-1)*(dearangement(n-1)+dearangement(n-2));
    return dp[n];
}

// solve tab
/*
int ans(int n)
{
   vector<int> dp(n+1,-1);
   dp[1]=0;
   dp[2]=1;
   base cases 
   now iterate from 3 to  n
    
}
*/