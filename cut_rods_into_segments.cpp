#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maximum(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
    return b;
    }
}
// its still  a 1 d recursion cause out of 4 variables only one varaible ie n is chnaging its value
// so just apply dp accor a

// where each i will rpresnt that i rod e kitne max segments ho sakte hain

int solve(int n,int x,int y,int z)
{
    if(n<0)
    {
        return -1;
    }
    if(n==0)
    {
        return 0;
    }
    int a=solve(n-x,x,y,z);
    int b=solve(n-y,x,y,z);
    int c=solve(n-z,x,y,z);
    int max=maximum(a,maximum(b,c));
    return max;
}

int main()
{


    return 0;
}

// similarly coyul use a bottom up approach

