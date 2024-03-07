#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
vector<vector <bool> > board(8, vector<bool>(8, true));
int queenBoard[8];
int solutions = 0;
bool safe(int row, int col)
{
    if (!board[row][col])
        return false;
    for (int i = 0; i < row; ++i)
        if (queenBoard[i] == col || abs(i - row) == abs(queenBoard[i] - col))
            return false;
    return true;
}
void solve(int row)
{
    if (row == 8) {
        ++solutions;
        return;
    }
    for (int col = 0; col < 8; ++col)
        if (safe(row, col)) {
            queenBoard[row] = col;
            solve(row + 1);
        }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; ++j) {
            char temp;
            cin >> temp;
            if (temp == '.')
                continue;
            else
                board[i][j] = false;
        }
    solve(0);
    cout << solutions << endl;
    return 0;
}
