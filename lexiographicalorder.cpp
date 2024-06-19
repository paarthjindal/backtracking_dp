#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// lexiographical order means dictionary order 
// firstly call 1 then 1 will call 11 then 12 till 19 then 11 will ccall its 11 famimlty and so on
// then same call 2 and other steps

void dfs(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<" ";
    for(int j=0;j<=9;j++)
    {
        dfs(i*10+j,n);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=9;i++)
    {
        dfs(i,n);    
    }
    return 0;
} 