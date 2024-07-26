#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)

void cntnum(int len, int str_len, int alpha[26], int cnt_alpha[26], int ans[8]) {
    if (len >= str_len) {
        rei(str_len) cout << (char)('a' + ans[i]);
        cout << endl;
    }

    rei(26) {
        if (cnt_alpha[i] >= alpha[i]) continue;

        ans[len] = i;
        cnt_alpha[i]++;
        cntnum(len+1, str_len, alpha, cnt_alpha, ans);
        cnt_alpha[i]--;
    }
}
int alpha[26];
int cnt_alpha[26];

int main(){
    ac;
    string str;
    int ans[10];

    cin >> str;
    int str_len = str.size();

    rei(str_len) {
        alpha[str[i]-'a'] += 1;
    }

    int cntans = 1;

    rei1(str_len) cntans *= i;
    rei(26) {
        if (alpha[i] == 0) continue;
        rej1(alpha[i]) {
            cntans /= j;
        }
    }

    cout << cntans << endl;
    cntnum(0, str_len, alpha, cnt_alpha, ans);
}