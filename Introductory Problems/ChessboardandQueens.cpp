#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)

bool check(char board[8][8], int used_row[8], int row, int col) {
    if (used_row[row] == 1 || board[row][col] == '_') return false;

    for (int i=row-1, j=col-1; i>=0 && j>=0; i--, j--) {
        if (board[i][j] == '_') return false;
    }
    for (int i=row+1, j=col-1; i>=0 && j>=0; i++, j--) {
        if (board[i][j] == '_') return false;
    }
    return true;
}

void queens(int len, char board[8][8], int used_row[8], int *ans) {
    if (len == 8) {
        (*ans)++;
        return;
    }

    for (int i=0; i<8; i++) {
        if (board[i][len] == '*') continue;
        if (check(board, used_row, i, len)) {
            used_row[i] = 1;
            board[i][len] = '_';
            queens(len+1, board, used_row, ans);
            board[i][len] = '.';
            used_row[i] = 0;
        }
    }

}

char board[8][8];
int used_row[8];

int main(){
    ac;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            cin >> board[i][j];
        }
    }

    int res = 0;
    queens(0, board, used_row, &res);


    cout << res << endl;
}