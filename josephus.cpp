#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// given n and k n are place in the circle . they are one by one killed after k ie k-1 survived 
//return the last element that remains
//Answer
// treat it as linear array
//then after filling after k add previous k elemts to the last 
// change the indices of the array to makek it start with 0
// have a conversion formula x+k whoel mod n
//recurse 

int solution(int n,int k)
{
   if(n==1)
   {
    return 0;
   }
   int x=solution(n-1,k);
   int y=(x+k)%n;
   return y;
}
//just let do recursion do its magic make a tree and dry run of the resut to get and idea
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int ans=solution(n,k);


    return 0;
} 