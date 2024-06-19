#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// in dp we use two approaches 
// top down approach    recursion +memiozation
// bottom up approach tabulatioin method
// space optimization

//following solution
// time complexity = order of n  
// cause we are moving from n to 1 along the recursion tree once cause we take o of n time to fill the table
// space complexity firstly an array of size n so o of n then we are traversing n levels in recursion so 0 of n more

int fib(int n,vector<int>&dp)
{
    if(n==1||n==0)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
   int a= fib(n,dp);
   cout<<a<<endl;
    return 0;
}

// now lets convert the question into bottom up approach ie tabulation method 

/*  firstly create an array dp (n+1) 
   then look for base case and fill the values 
   0 and 1 are base case so dp[0]=0 dp[1]=1
   then itereate from 2 to n ie bottom up
   for(int i=2;i<=n;i++)
   {
      dp[i]=dp[i-1]+dp[i-2];
   }

  return dp[n];


  by thsis method one by one values in dp will be filled
  time compextiy  = order of n traversing the array
  space only o of n of arrat no recursive so better than above 



*/

/*
    NOW LETS LOOK FOR THIRD APPRACH SPACE OPTIMIZATION 
    OVER HERE WE WILL TRY TO SOLVE IN LESS SPACE
    WE WONT MAKE ANY ARRAY 
   we will use two variables prev and curr
   so for base case we will intialize prev1 =0 for 0 and prev2=1 for 1
   then itereate
   for(int i=2;i<=n;i++)
   {
     curr=prev1+prev2
     prev1=prev2;
     prev2=curr;
   }
   return curr

   by this we saved o of n space
*/