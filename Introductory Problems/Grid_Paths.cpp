#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)

char board[8][8];
int used_board[9][9] = {0};
string str;

void solve(int pathlen, int row, int col, int *ans) {
    if (row < 1 || row >= 8 || col < 1 || col >= 8 || used_board[row][col] == 1) return;
    if (row == 7 && col == 1 && pathlen < 48) return;
    if(used_board[row-1][col] && used_board[row+1][col] && !used_board[row][col+1] && !used_board[row][col-1]) return;
    if(!used_board[row-1][col] && !used_board[row+1][col] && used_board[row][col+1] && used_board[row][col-1]) return;


    if (row == 7 && col == 1 && pathlen == 48) {
        (*ans)++;
        return;
    }

    used_board[row][col] = 1;

    if (str[pathlen] == 'D') {
        solve(pathlen+1, row+1, col, ans);
    }
    else if (str[pathlen] == 'U') {
        solve(pathlen+1, row-1, col, ans);
    }
    else if (str[pathlen] == 'L') {
        solve(pathlen+1, row, col-1, ans);
    }
    else if (str[pathlen] == 'R') {
        solve(pathlen+1, row, col+1, ans);
    }
    else {
        solve(pathlen+1, row+1, col, ans);
        solve(pathlen+1, row-1, col, ans);
        solve(pathlen+1, row, col+1, ans);
        solve(pathlen+1, row, col-1, ans);
    }

    used_board[row][col] = 0;
}

int main(){
    ac;
    cin >> str; 
    int ans = 0; 

    for(int i=1;i<=7;i++){
        used_board[i][0] = 1;
        used_board[8][i] = 1;
        used_board[i][8] = 1;
        used_board[0][i] = 1;
    }   

    solve(0, 1, 1, &ans);
    cout << ans << endl;
}