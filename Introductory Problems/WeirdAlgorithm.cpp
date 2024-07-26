#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 
#define rei(x) for (int i=0; i<x; i++)

int main(){
    ac;
    ll ans; int  cnt = 0;
    cin >> ans;
    while (ans != 1) {
        cout << ans << " ";
        if (ans % 2 == 0) {
            ans /= 2;
        }
        else {
            ans = (3 * ans + 1);
        }
    }
    cout << 1 << endl;
}