#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// for n queens we use 3 arrays one for columsn which can be implemente by just passign true for that colum
// anoher diagonal array trick same row +col size =2n-1
// anoher diagonal array trick same row -col size =2n-1
// but i will result in negagive values so also add board lenght-1 to result to make it fit in array


void solve(vector<vector<bool>>board,int row,vector<bool>colar,vector<bool>ndag,vector<bool>ddag,int* ans)
    {
        if(row==board.size())
        {
            *ans=*ans+1;
            cout<<"hello";
            return;
        }
        for(int col=0;col<board.size();col++)
        {
            if(colar[col]==false&&ndag[row+col]==false&&ddag[row-col+board.size()-1]==false)
            {
                board[row][col]=true;
                colar[col]=true;
                ndag[row+col]=true;
                ddag[row-col+board.size()-1]=true;
                solve(board,row+1,colar,ndag,ddag,ans);
                 board[row][col]=false;
                colar[col]=false;
                ndag[row+col]=false;
                ddag[row-col+board.size()-1]=false;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<bool>> board(n, vector<bool>(n, false));
        vector<bool>colar(n,false);
        vector<bool>ndag(2*n-1,false);
        vector<bool>ddag(2*n-1,false);
        int ans=0;
        int row=0;
        solve(board,row,colar,ndag,ddag,&ans);
        return ans;
    }

int main()
{
    cout<<"lets start new adenture";
    return 0;
} 
