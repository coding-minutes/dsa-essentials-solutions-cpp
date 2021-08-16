#include <bits/stdc++.h>
using namespace std;
bool chk;
void recur(vector<vector<char>>& board, string &word, int i, int j, int k)
{
    if(k == word.size())
    {
        chk = true;
        return;
    }
    if(i < 0 || j < 0 || i == board.size() || j == board[0].size() || board[i][j] == '-1')
        return;
    
    if(board[i][j] == word[k])
    {
        char c = board[i][j];
        board[i][j] = '-1';
        recur(board, word, i, j+1, k+1);
        recur(board, word, i+1, j, k+1);
        recur(board, word, i, j-1, k+1);
        recur(board, word, i-1, j, k+1);
        board[i][j] = c;
    }
    return;
}
bool wordSearch(vector<vector<char>> &board, string word)
{
    chk  = false;
    for(int i=0; i<board.size(); i++)
    {
        for(int j=0; j<board[0].size(); j++)
        {
            if(board[i][j]==word[0])
                recur(board, word, i, j, 0);
        }
    }
    
    return chk;
}