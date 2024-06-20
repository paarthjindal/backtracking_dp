#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// will solve sudoku using backtracking 

class Solution {
public:
    bool isvalid(vector<vector<char>>& board, int i, int j, char c) {
        for (int a = 0; a < 9; a++) {
            if (board[i][a] == c) {
                return false;
            }
            if (board[a][j] == c) {
                return false;
            }
        }
        int p = (i / 3) * 3;
        int s = (j / 3) * 3;
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                if (board[p + x][s + y] == c) {
                    return false;
                }
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board, int i, int j) {
        if (i == 9) {
            return true; // Successfully solved the Sudoku
        }
        int ni = (j == 8) ? i + 1 : i;
        int nj = (j == 8) ? 0 : j + 1;

        if (board[i][j] != '.') {
            return solve(board, ni, nj);
        } else {
            for (char c = '1'; c <= '9'; c++) {
                if (isvalid(board, i, j, c)) {
                    board[i][j] = c;
                    if (solve(board, ni, nj)) {
                        return true;
                    }
                    board[i][j] = '.'; // Backtrack
                }
            }
        }
        return false; // No valid number found, trigger backtracking
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
};

int main()
{

    return 0;
}