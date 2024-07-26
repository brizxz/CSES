#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)


int main(){
    ac;
    string str;
    cin >> str;
    int total[30] = {0};
    int len = str.length();

    rei(len) {
        total[str[i]-'A']++;
    }

    int cnt = 0; int loc;
    rei(30) {
        if (total[i] % 2 == 1) {
            loc = i;
            cnt++;
        }
    }

    if ((cnt > 0 && len % 2 == 0) || (cnt > 1 && len % 2 == 1)) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else {
        rei(26) {
            rej(total[i]/2) {
                cout << (char)('A'+i);
            }
        }
        if (len%2 == 1) cout << (char)('A'+loc);
        rei_rev(26) {
            rej(total[i]/2) {
                cout << (char)('A'+i);
            }
        }
    }
}